package com.nog.game.utils;
import flash.display.BitmapData;
import openfl.Vector;

/**
 * ...
 * @author Colapsydo
 * 
 * This class is mainly an haxe port of Hans Muller's work on 
 * "Approximating a Circular Arc With a Cubic Bezier Path"
 * link: http://hansmuller-flex.blogspot.it/2011/04/approximating-circular-arc-with-cubic.html
 * 
 * His work is based on the approach described in:
 * A. Riškus, "Approximation of a Cubic Bezier Curve by Circular Arcs and Vice Versa," 
 * Information Technology and Control, 35(4), 2006 pp. 371-378.
 */
class BezierArc
{
	static inline var _bezierArcConst:Float = 0.5522847498;
	static inline var _twoPi:Float = 6.2831853072;
	static inline var _piOverTwo:Float = 1.5707963268;
	
	//PUBLIC FUNCTIONS
	
	static public function createArcQuadCurve(startAngleRad:Float, endAngleRad:Float, ?ray:Float=1, ?centerX:Float=0, ?centerY:Float=0):Vector<Float> {
		var result:Vector<Float> = new Vector<Float>();
		
		var startAngle = startAngleRad;
		var endAngle = endAngleRad;
		
		if (endAngle < startAngle) {
			var temp = startAngle;
			startAngle = endAngle;
			endAngle = temp;
		}
		
		var totalAngle = endAngle > startAngle ? endAngle-startAngle:startAngle-endAngle;
		
		while (totalAngle > _piOverTwo) {
			result = result.concat(createArc(startAngle, startAngle+_piOverTwo, ray, centerX, centerY));
			startAngle += _piOverTwo;
			totalAngle = endAngle > startAngle ? endAngle-startAngle:startAngle-endAngle;
		}
		result = result.concat(createArc(startAngle, endAngle, ray,centerX,centerY));
		
		return(result);
	}
	
	//PRIVATE FUNCTIONS
	
	static function createArc(startAngle:Float, endAngle:Float, ray:Float, centerX:Float, centerY:Float):Vector<Float> {
		var angle = (endAngle-startAngle)*.5;
		var cosA:Float = Math.cos(angle);
		var sinA:Float = Math.sin(angle);
		var ctrlTan:Float = _bezierArcConst * Math.tan(angle);
		
		var anchor2X:Float = ray * cosA ;
		var anchor2Y:Float = ray * sinA;
		var anchor1X:Float = anchor2X;
		var anchor1Y:Float = -anchor2Y;
		var control1X:Float = anchor1X + ctrlTan * anchor2Y; // anchor1X + bezierArcConst * Tan(angle) * ray * Sin(angle)
		var control1Y:Float = anchor1Y + ctrlTan * anchor2X; // anchor1Y + bezierArcConst * Tan(angle) * ray * Cos(angle)
		var control2X:Float = control1X;
		var control2Y:Float = -control1Y;
		
		var angleRotation:Float = startAngle+angle;
		var cosRotation:Float = Math.cos(angleRotation);
		var sinRotation:Float = Math.sin(angleRotation);
		
		return(Vector.ofArray([centerX + ray*Math.cos(startAngle), centerY + ray*Math.sin(startAngle), centerX + control1X*cosRotation- control1Y*sinRotation, centerY +  control1X*sinRotation+ control1Y*cosRotation, centerX +  control2X*cosRotation- control2Y*sinRotation, centerY + control2X*sinRotation+ control2Y*cosRotation, centerX + ray*Math.cos(endAngle), centerY + ray*Math.sin(endAngle)]));
	}
}