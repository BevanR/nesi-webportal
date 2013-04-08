; ----------------
; NeSI webportal make file
; version 0.9.3
; ----------------
  
; Core version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.

core = 7.x

; API version
; ------------
; Every makefile needs to declare its Drush Make API version. This version of
; drush make uses API version `2`.

api = 2

; Build with Drupal core version
projects[drupal][version] = "7.21"

; Modules
projects[admin_menu][version] = "3.0-rc3"
projects[advanced_help][version] = "1.0"
projects[bugherd][version] = "1.0-beta3"
projects[ctools][version] = "1.2"
projects[bundle_copy][version] = "1.1"
projects[countries][version] = "2.1"
projects[date][version] = "2.6"
projects[devel][version] = "1.3"
projects[email][version] = "1.2"
projects[email_registration][version] = "1.1"
projects[entity][version] = "1.0-rc3"
projects[features_extra][version] = "1.0-alpha2"
projects[features][version] = "1.0"
projects[feed_path_publisher][version] = "1.0-beta1"
projects[field_group][version] = "1.1"
projects[flag][version] = "2.0"
projects[google_analytics][version] = "1.3"
projects[imce][version] = "1.6"
projects[imce_wysiwyg][version] = "1.0"
projects[jquery_colorpicker][version] = "1.0-rc1"
projects[jquery_update][version] = "2.3-alpha1+0-dev"
projects[libraries][version] = "2.0"
projects[link][version] = "1.0"
projects[mailsystem][version] = "2.34"
projects[menu_attributes][version] = "1.0-rc2"
projects[menu_block][version] = "2.3"
projects[mimemail][version] = "1.0-alpha2"
projects[modernizr][version] = "2.1"
projects[module_filter][version] = "1.7"
projects[references][version] = "2.0"
projects[pathauto][version] = "1.2"
projects[profile2][version] = "1.3"
projects[rules][version] = "2.3"
projects[shib_auth][version] = "4.0"
projects[smtp][version] = "1.0-beta2"
projects[token][version] = "1.4"
projects[viewfield][version] = "2.0"
projects[views][version] = "3.5"
projects[wysiwyg][version] = "2.2"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
projects[nesi_config][download][type] = ""
projects[nesi_config][download][url] = ""
projects[nesi_config][type] = "module"
projects[nesi_config][version] = "0.5"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
projects[nesi_ft_all_proposals][download][type] = ""
projects[nesi_ft_all_proposals][download][url] = ""
projects[nesi_ft_all_proposals][type] = "module"
projects[nesi_ft_all_proposals][version] = "1.0"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
projects[nesi_ft_homepage][download][type] = ""
projects[nesi_ft_homepage][download][url] = ""
projects[nesi_ft_homepage][type] = "module"
projects[nesi_ft_homepage][version] = "0.2"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
projects[nesi_ft_researcher_proposals][download][type] = ""
projects[nesi_ft_researcher_proposals][download][url] = ""
projects[nesi_ft_researcher_proposals][type] = "module"
projects[nesi_ft_researcher_proposals][version] = "0.2"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
projects[nesi_ft_submit_proposal_flag][download][type] = ""
projects[nesi_ft_submit_proposal_flag][download][url] = ""
projects[nesi_ft_submit_proposal_flag][type] = "module"
projects[nesi_ft_submit_proposal_flag][version] = "0.5"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
projects[nesi_hpc_calc][download][type] = ""
projects[nesi_hpc_calc][download][url] = ""
projects[nesi_hpc_calc][type] = "module"
projects[nesi_hpc_calc][version] = "0.5"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
projects[nesi_rest][download][type] = ""
projects[nesi_rest][download][url] = ""
projects[nesi_rest][type] = "module"
projects[nesi_rest][version] = "0.5"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
projects[nesi_slideshow][download][type] = ""
projects[nesi_slideshow][download][url] = ""
projects[nesi_slideshow][type] = "module"
projects[nesi_slideshow][version] = "0.3"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
projects[nesi_stats][download][type] = ""
projects[nesi_stats][download][url] = ""
projects[nesi_stats][type] = "module"
projects[nesi_stats][version] = "0"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
projects[nesi_user][download][type] = ""
projects[nesi_user][download][url] = ""
projects[nesi_user][type] = "module"
projects[nesi_user][version] = "0.6"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
projects[nesi_user_modal][download][type] = ""
projects[nesi_user_modal][download][url] = ""
projects[nesi_user_modal][type] = "module"
projects[nesi_user_modal][version] = "0.1"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
projects[nesi_user_profile_modal][download][type] = ""
projects[nesi_user_profile_modal][download][url] = ""
projects[nesi_user_profile_modal][type] = "module"
projects[nesi_user_profile_modal][version] = "0.1"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
projects[nesi_base_proposal][download][type] = ""
projects[nesi_base_proposal][download][url] = ""
projects[nesi_base_proposal][type] = "module"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
projects[nesi_ft_proposal][download][type] = ""
projects[nesi_ft_proposal][download][url] = ""
projects[nesi_ft_proposal][type] = "module"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
projects[nesi_mstep_proposal][download][type] = ""
projects[nesi_mstep_proposal][download][url] = ""
projects[nesi_mstep_proposal][type] = "module"

; Themes
; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
projects[bootstrap][download][type] = ""
projects[bootstrap][download][url] = ""
projects[bootstrap][type] = "theme"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
projects[nesi_bootstrap][download][type] = ""
projects[nesi_bootstrap][download][url] = ""
projects[nesi_bootstrap][type] = "theme"

; Libraries
; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
libraries[ckeditor][download][type] = ""
libraries[ckeditor][download][url] = ""
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
libraries[colorpicker][download][type] = ""
libraries[colorpicker][download][url] = ""
libraries[colorpicker][directory_name] = "colorpicker"
libraries[colorpicker][type] = "library"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
libraries[modernizr][download][type] = ""
libraries[modernizr][download][url] = ""
libraries[modernizr][directory_name] = "modernizr"
libraries[modernizr][type] = "library"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
libraries[tinymce][download][type] = ""
libraries[tinymce][download][url] = ""
libraries[tinymce][directory_name] = "tinymce"
libraries[tinymce][type] = "library"

