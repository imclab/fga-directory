Drupal.behaviors.directory = {

	attach: function(context, settings){

		Drupal.behaviors.directory.map = jQuery( '#directory-map-wrapper' )[0];

		function resize_map(){
			var map = jQuery( Drupal.behaviors.directory.map );
			var winh = jQuery(window).height();
			if( console.log ) console.log( map.offset().top ); 
			map.css( { 'width': '100%', 'height': winh - Math.floor( map.offset().top ) } );				
		}

		if( Drupal.behaviors.directory.map ) {

			resize_map();
			jQuery(window).resize( function(){
				resize_map();
			});

		}

	}

};
