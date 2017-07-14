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

## Installation

- Install this module using the official [Backdrop CMS instructions](https://backdropcms.org/guide/modules)
- Download additional modules. Menu Position module is supported (and great for rule based appearance of content in menus).
- Configure your permissions and content types:
  - Make sure at least one content type is configured in Backdrop's standard node type configuration form to be enabled to receive menu entries of the menu(s) where the content should be placed, to make at least one node type show up in the "target type" dropdown.
  - Make sure the user you try the module with has sufficient permission (to access admin area, to administer menus, to administer content, to create and delete nodes of the respective type, …). The new "administer system menus" is necessary for users that should see _all_ menus on the menu overview admin page (Users without this permission are not shown the content_menu_special_menus (variable details see below)).
- Go to Admin > Structure > Menus and start adding menu items into e.g the "Main Menu".
- Or watch out Screencast (see above) to get ideas of what to do (and how).
- See the content_menu.api.php file for further development information on new permission(s), system variables you can override, or hooks you might want to use as a developer to extend content_menu.module

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
- Ported to Backdrop CMS by [Alexander Rozhkov](https://github.com/Al-Rozhkov).

## License

This project is GPL v2 software. See the [LICENSE.txt](https://github.com/backdrop-contrib/multifield/blob/1.x-1.x/LICENSE.txt) 
file in this directory for complete text.
