<?php
/**
 * @file
 * Definition of Zurb Foundation One column Display Suite layout.
 */

function ds_zf_1col() {
  return array(
    'label' => t('Zurb Foundation One column'),
    'regions' => array(
        'ds_header' => t('Header'),
      'ds_content' => t('Content'),
    ),
    'image' => TRUE,
  );
}
