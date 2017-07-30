# Content menu

Content menu module rewires Backdrop's default menu management interface for tighter intergation of content authoring and menu management.

The goal is to make building a site's structure and content in one fluid process seamless, easy and natural. Editors can create content along with a menu item without ever really leaving the menu management process. Editors can find, associate and edit content right from the menu management interface.

Content Menu module makes building a structure-oriented website "page by page" with Backdrop effortless and intuitive.

To get an impression of how easy content centric menu management is with the content menu module, watch our screencast: http://youtu.be/sYoYtoQ1s8c

## How it works

Basically, Content Menu evolves Backdrop's simplistic and isolated menu management interface into an editor's intuitive central for site authoring.

The most important new possibilties are to directly asses and edit a menu item's linked content and to directly create and position a new menu item with selectable target (content) type.

You can create a new menu item as …

- URL – With the traditional menu item form
- Dummy – As a dummy menu item (with simple dummy link target)
- New NODETYPE – directly create a new content for the new item
- Existing content – selecting an existing content via a nice filterable view (if views is enabled)
- Menu position rule (if the Menu Position module is enabled)

## Improved workflows

The workflows are kept concise and seamless, e.g for adding new menu items along with brand new content or with comfortably choosing existing content to link to.

The changes and improvements made by Content Menu include:

Menu links listing
- Relabeling the tabs ("Edit" and "Configure")
- Directly assesing, accessing and editing a menu item's linked content from the menu management interface
- Therefore, making a new "edit content" operation the default operation for menu items linking to nodes, views and layout pages
- Re-labeling operations ("edit content", "configure item", "delete")
- Directly create new menu items by entering title and positioning new items (analogous to field management interface)
- Simple inline editing of menu item titles

Menu management forms and pages
- Offer choice to delete associated node content along with deletion of a menu item (if checked and user is permitted)
- Node edit forms "menu settings" fieldset slightly improved

## Installation

- Install this module using the official [Backdrop CMS instructions](https://backdropcms.org/guide/modules)
- Download additional modules. Menu Position module is supported (and great for rule based appearance of content in menus).
- Configure your permissions and content types:
  - Make sure at least one content type is configured in Backdrop's standard node type configuration form to be enabled to receive menu entries of the menu(s) where the content should be placed, to make at least one node type show up in the "target type" dropdown.
  - Make sure the user you try the module with has sufficient permission (to access admin area, to administer menus, to administer content, to create and delete nodes of the respective type, …). The new "administer system menus" is necessary for users that should see _all_ menus on the menu overview admin page (Users without this permission are not shown the content_menu_special_menus (variable details see below)).
- Go to Admin > Structure > Menus and start adding menu items into e.g the "Main Menu".
- Or watch out Screencast (see above) to get ideas of what to do (and how).
- See the content_menu.api.php file for further development information on new permission(s), system variables you can override, or hooks you might want to use as a developer to extend content_menu.module

## Differences from drupal version

Menus overview tweak and "Administer system menus" permission was removed in favor of [Menu Administration Per Menu](https://github.com/backdrop-contrib/menu_admin_per_menu) module. This functionality wasn't properly implemented in Content menu. System menus were removed from menus overview page but still were available for editing by users without "Administer system menus" permission.

## Resources

* Screencast: http://youtu.be/sYoYtoQ1s8c
* Blog Post with background-info and discussion: http://wunderkraut.com/en/blog/content-menu-module-%E2%80%93-menu-author...
* content_menu.api.php file for further development information.

## Issues

Bugs and Feature requests should be reported in the 
[Issue Queue](https://github.com/backdrop-contrib/content_menu/issues)

## Current Maintainers

 - [Alexander Rozhkov](https://github.com/Al-Rozhkov)
 - Help welcome!

## Credits

- Content Menu is sponsored by http://www.wunderkraut.com
- https://www.drupal.org/u/simon-georges
- https://www.drupal.org/u/danielnolde
- Ported to Backdrop CMS by [Alexander Rozhkov](https://github.com/Al-Rozhkov).

## License

This project is GPL v2 software. See the [LICENSE.txt](https://github.com/backdrop-contrib/multifield/blob/1.x-1.x/LICENSE.txt) 
file in this directory for complete text.
