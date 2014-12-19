$(function () {

    // Give the points a 3D feel by adding a radial gradient
    Highcharts.getOptions().colors = $.map(Highcharts.getOptions().colors, function (color) {
        return {
            radialGradient: {
                cx: 0.4,
                cy: 0.3,
                r: 0.5
            },
            stops: [
                [0, color],
                [1, Highcharts.Color(color).brighten(-0.2).get('rgb')]
            ]
        };
    });

    // Set up the chart
    var chart = new Highcharts.Chart({
        chart: {
            renderTo: 'container',
            margin: 100,
            type: 'scatter',
            options3d: {
                enabled: true,
                alpha: 10,
                beta: 30,
                depth: 250,
                viewDistance: 5,

                frame: {
                    bottom: { size: 1, color: 'rgba(0,0,0,0.02)' },
                    back: { size: 1, color: 'rgba(0,0,0,0.04)' },
                    side: { size: 1, color: 'rgba(0,0,0,0.06)' }
                }
            }
        },
        title: {
            text: 'Draggable box'
        },
        subtitle: {
            text: 'Click and drag the plot area to rotate in space'
        },
        plotOptions: {
            scatter: {
                width: 10,
                height: 10,
                depth: 10
            }
        },
        yAxis: {
            min: 0,
            max: 50,
            title: null
        },
        xAxis: {
            min: 0,
            max: 10,
            gridLineWidth: 1
        },
        zAxis: {
            min: 0,
            max: 10
        },
        legend: {
            enabled: false
        },
        series: [{
            name: 'Reading',
            colorByPoint: true,
			// AB value DG
            data:[[0, 3.14, 1], [1, 8.22, 1], [ 2,14.38,1], [ 3,23.78,1], [ 4,22.40,1], [ 5,14.96,1], [ 6,12.80,1], [ 7, 10.07, 1], [ 8, 1.16, 1], 
					[0, 10.34, 2], [1, 18.75,2], [2, 35.25,2], [3, 42.15,2], [4, 38.05, 2], [5, 19.17, 2], [6, 12.8, 2], [7, 3.05, 2],
					[0, 26.77,3], [1, 42.75,3], [2, 50,3], [3, 46.73,3], [4, 34.26,3], [5, 26.27,3], [6, 7.28,3],				   
					[0, 35.71,4], [1, 59.54,4], [2, 53.54,4], [3, 51.67,4], [4, 22.95,4], [5, 9.43,4],
					[0, 40.65,5], [1, 58.40,5], [2, 54.46,5], [3, 34.45,5], [4, 13.89,5], 
					[0, 53.4,6], [1, 57.89,6], [2, 45,6], [3, 21.38,6],
					[0, 54.74,7], [1, 54.55,7], [2, 17.07,7],
					[0, 46.67,8], [1, 28.08,8], 
					[0, 37.7, 9]]
        }]
    });


    // Add mouse events for rotation
    $(chart.container).bind('mousedown.hc touchstart.hc', function (e) {
        e = chart.pointer.normalize(e);

        var posX = e.pageX,
            posY = e.pageY,
            alpha = chart.options.chart.options3d.alpha,
            beta = chart.options.chart.options3d.beta,
            newAlpha,
            newBeta,
            sensitivity = 5; // lower is more sensitive

        $(document).bind({
            'mousemove.hc touchdrag.hc': function (e) {
                // Run beta
                newBeta = beta + (posX - e.pageX) / sensitivity;
                newBeta = Math.min(100, Math.max(-100, newBeta));
                chart.options.chart.options3d.beta = newBeta;

                // Run alpha
                newAlpha = alpha + (e.pageY - posY) / sensitivity;
                newAlpha = Math.min(100, Math.max(-100, newAlpha));
                chart.options.chart.options3d.alpha = newAlpha;

                chart.redraw(false);
            },
            'mouseup touchend': function () {
                $(document).unbind('.hc');
            }
        });
    });

});