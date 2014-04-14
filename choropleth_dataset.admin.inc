<?php

/**
 * @file
 * Admin page callback file for the choropleth_dataset module.
 */

/**
 * Page callback: The admin form.
 *
 * @see choropleth_dataset_menu()
 *
 * @ingroup forms
 */
function cholopleth_dataset_settings_form() {
  $form = array();

  $form['embed_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Embed Settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['embed_settings']['choropleth_embed_domain_description'] = array(
    '#type' => 'item',
    '#title' => t('Domain Settings'),
    '#markup' => t('<p>By default, map embed codes will reference the domain you are currently on. However, some teams use custom subdomains for workflow and permssions purposes, like <em>http://dev.example.com</em>, <em>http://stage.example.com</em>, and <em>http://edit.example.com</em>. In these cases, including the subdomain in embed codes could result in accidentally embedding maps that are not publically visible.</p>
      <p>To prevent this, you can specify your production domain below, and the embed codes will reference this domain regardless of the current environment.</p>'
     ),
  );

  $form['embed_settings']['choropleth_embed_domain'] = array(
    '#type' => 'textfield',
    '#title' => t('Production Domain'),
    '#size' => 60,
    '#default_value' => variable_get('choropleth_embed_domain', ''),
    '#description' => t('Enter the full domain (protocol + subdomain + domain) that you want to appear in map embeds. For example, if your production site is at http://www.example.com, enter "http://www.example.com". If your production site is at http://data.example.com, enter "http://data.example.com".'
    ),
  );

  return system_settings_form($form);
}
