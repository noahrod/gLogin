<?php

function glogin_settings() {
  $form['glogin_client_id'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Client Id'),
    '#required'      => TRUE,
    '#description' => t('El id del cliente de la aplicación'),
    '#default_value' => variable_get('glogin_client_id', ''),
  );
  $form['glogin_client_secret'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Client Secret'),
    '#required'      => TRUE,
    '#description' => t('El client secret de la aplicación'),
    '#default_value' => variable_get('glogin_client_secret', ''),
  );
  $form['glogin_domain'] = array(
    '#type' => 'textfield',
    '#title' => t('Dominio'),
    '#required' => TRUE,
    '#description' => t('Dominio del que se aceptan conexiones'),
    '#default_value' => variable_get('glogin_domain', ''),
  );
  return system_settings_form($form);
}
  