; ----------------
; NeSI webportal make file
; version 0.4
; ----------------
  
; Core version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.
  
core = "7"
  
; API version
; ------------
; Every makefile needs to declare its Drush Make API version. This version of
; drush make uses API version `2`.
  
api = "2"
  
; Core project
; ------------
; In order for your makefile to generate a full Drupal site, you must include
; a core project. This is usually Drupal core, but you can also specify
; alternative core projects like Pressflow. Note that makefiles included with
; install profiles *should not* include a core project.
  
; Drupal 7.x. Requires the `core` property to be set to 7.x.
projects[drupal][version] = "7.14"

; Modules
; --------
projects[admin_menu][version] = "3.0-rc3"
projects[admin_menu][type] = "module"
projects[admin_menu][subdir] = "contrib"
projects[ctools][version] = "1.0"
projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"
projects[entity][version] = "1.0-rc3"
projects[entity][type] = "module"
projects[entity][subdir] = "contrib"
projects[date][version] = "2.5"
projects[date][type] = "module"
projects[date][subdir] = "contrib"
projects[devel][version] = "1.3"
projects[devel][type] = "module"
projects[devel][subdir] = "contrib"
projects[features][version] = "1.0-rc2"
projects[features][type] = "module"
projects[features][subdir] = "contrib"
projects[flag][version] = "2.0-beta6"
projects[flag][type] = "module"
projects[flag][subdir] = "contrib"
projects[diff][version] = "2.0"
projects[diff][type] = "module"
projects[diff][subdir] = "contrib"
projects[nodereference_url][version] = "1.12"
projects[nodereference_url][type] = "module"
projects[nodereference_url][subdir] = "contrib"
projects[references][version] = "2.0"
projects[references][type] = "module"
projects[references][subdir] = "contrib"
projects[token][version] = "1.1"
projects[token][type] = "module"
projects[token][subdir] = "contrib"
projects[print][version] = "1.1"
projects[print][type] = "module"
projects[print][subdir] = "contrib"
projects[rules][version] = "2.1"
projects[rules][type] = "module"
projects[rules][subdir] = "contrib"
projects[views][version] = "3.3"
projects[views][type] = "module"
projects[views][subdir] = "contrib"
projects[profile2][type] = "module"
projects[profile2][subdir] = "contrib"
projects[profile2][version] = "1.2"
projects[countries][type] = "module"
projects[countries][subdir] = "contrib"
projects[countries][version] = "2.0"
projects[revisioning][type] = "module"
projects[revisioning][subdir] = "contrib"
projects[revisioning][version] = "1.4"
projects[field_permissions][type] = "module"
projects[field_permissions][subdir] = "contrib"
projects[field_permissions][version] = "1.0-beta2"
projects[eva][type] = "module"
projects[eva][subdir] = "contrib"
projects[eva][version] = "1.x-dev"
projects[email_registration][type] = "module"
projects[email_registration][subdir] = "contrib"
projects[email_registration][version] = "1.0"

; Custom modules
; --------------
; projects[nesi_rest][type] = "module"
; projects[nesi_rest][subdir] = "custom" 
; projects[nesi_rest][download][type] = "git" 
; projects[nesi_user][type] = "module"  
; projects[nesi_user][subdir] = "custom"
; projects[nesi_user][download][type] = "git"
; projects[nesi_proposal][type] = "module"  
; projects[nesi_proposal][subdir] = "custom"
; projects[nesi_proposal][download][type] = "git"

; Themes
; --------
  
; Libraries
; ---------
; No libraries were included

