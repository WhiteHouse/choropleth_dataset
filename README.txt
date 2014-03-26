Module: choropleth_dataset

CONTENTS OF THIS FILE
---------------------
 * Introduction
 * Requirements
 * Installation
 * Configuration
 * Troubleshooting
 * FAQ
 * Future Improvements

INTRODUCTION
------------
The choropleth_dataset module adds the possibility for choropleth maps (region
based data) and point based maps to be displayed off of the DKAN dataset node.
It also provides an iframeable view path so that maps can be embedded on other
websites.

The choropleth_dataset module was built to work with the DKAN distribution
https://drupal.org/project/dkan and extend the DKAN Dataset module.

REQUIREMENTS
------------
This module requires the following modules:
 * DKAN Datastore (https://drupal.org/project/dkan_datastore)
 * DKAN Dataset (https://drupal.org/project/dkan_dataset)
 * Recline (https://drupal.org/project/recline)
 * Choropleth (https://drupal.org/project/choropleth)



INSTALLATION
------------
 * Install as you would normally install a contributed drupal module. See:
  https://drupal.org/documentation/install/modules-themes/modules-7
  for further information.


CONFIGURATION
-------------
 * Configure user permissions in Administration » People » Permissions:
  - View choropleth renderings must be granted to any role that should be able
    to see the choropleth map for a dataset.
  - Any resource that has data for a map should have the Recline View of
    States Map or Map enabled.  If any of the resources in a dataset have this
    enabled, then a link to the choropleth view will appear when viewing the
    dataset node.

TROUBLESHOOTING
---------------
 * The choropleth_dataset display is largely javascript based, so if the map
   fails to appear, the console in your browser is a good place to look.  It is
   possible that a javascript error from something unrelated to
   choropleth_dataset is preventing choropleth_dataset from running.
 * Not seeing the choropleth link when viewing the dataset page?  Check to make
   sure that at least one of the resources in the dataset is set to have  a
   a Recline view of State Map or Map.


FAQ
---
Q:
A:

FUTURE IMPROVEMENTS
-------------------
 * Currently this module only supports resources that are file uploads.  It does
   not support links to files or links to an API.
 * Currently only supports state regions.  It could be expanded to countries or
   counties in a model similar to how the choropleth module handles it.
