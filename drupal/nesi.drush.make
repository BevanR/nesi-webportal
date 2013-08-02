; NeSI Website drush-make file.

core = 7.x
api = 2

; Build with Drupal core version
projects[drupal][version] = 7.22

; Modules
projects[admin_views][version] = 1.2
projects[admin_menu][version] = 3.0-rc4
projects[advanced_help][version] = 1.0
projects[bugherd][version] = 1.0-beta3
projects[ctools][version] = 1.3
projects[bundle_copy][version] = 1.1
projects[countries][version] = 2.1
projects[date][version] = 2.6
projects[devel][version] = 1.3
projects[ds][version] = 2.4
projects[email][version] = 1.2
projects[email_registration][version] = 1.1
projects[entity][version] = 1.0-rc3
projects[entityreference][version] = 1.0
projects[features_extra][version] = 1.0-alpha2
projects[features][version] = 1.0
projects[feed_path_publisher][version] = 1.0-beta1
projects[field_group][version] = 1.1
projects[flag][version] = 2.0
projects[google_analytics][version] = 1.3
projects[imce][version] = 1.7
projects[imce_wysiwyg][version] = 1.0
projects[jquery_colorpicker][version] = 1.0-rc2
projects[jquery_update][version] = 2.3
projects[libraries][version] = 2.1
projects[link][version] = 1.1
projects[mailsystem][version] = 2.34
projects[menu_attributes][version] = 1.0-rc2
projects[menu_block][version] = 2.3
projects[mimemail][version] = 1.0-alpha2
projects[module_filter][version] = 1.7
projects[mollom][version] = 2.6
projects[og][version] = 2.2
projects[references][version] = 2.1
projects[pathauto][version] = 1.2
projects[profile2][version] = 1.3
projects[rules][version] = 2.3
projects[sharethis][version] = 2.5
projects[shib_auth][version] = 4.0
projects[smtp][version] = 1.0
projects[strongarm][version] = 2.0
projects[token][version] = 1.5
projects[uuid][version] = 1.0-alpha4
projects[uuid_features][version] = 1.0-alpha3
projects[viewfield][version] = 2.0
projects[views][version] = 3.7
projects[views_bulk_operations][version] = 3.1
projects[wysiwyg][version] = 2.2
; The list of modules is ordered alphabetically.

; Themes
projects[bootstrap][version] = 2.0

; The Bootstrap library goes in the Drupal bootstrap theme.
libraries[bootstrap][destination] = themes/bootstrap
; Download the zip file so that we can use drush make's subtree feature.
libraries[bootstrap][download][type] = file
; The version number is repeated in subtree.
libraries[bootstrap][download][url] = https://github.com/twbs/bootstrap/archive/v2.2.2.zip
; We need the docs/assets/ directory.
libraries[bootstrap][download][subtree] = bootstrap-2.2.2/docs/assets

; Libraries
libraries[ckeditor][download][type] = file
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.6.1/ckeditor_3.6.6.1.tar.gz

;This file is from http://www.eyecon.ro/colorpicker/ but stored at github because the original location rejects all HTTP requests made with a "curl" user agent - and this makes life hard when using drush make....
libraries[colorpicker][download][type] = get
libraries[colorpicker][download][url] = https://github.com/downloads/reload/siteprocessor/colorpicker.zip 
; Check the md5 checksum since we can't specify the version number.
libraries[colorpicker][download][md5] = d420dbce14507a13417d88f6c955429c

; Wkhtmltopdf class requires the wkhtmltopdf binary and the binary requires libdev-ssl.
libraries[wkhtmltopdf][download][type] = git
libraries[wkhtmltopdf][download][url] = https://github.com/aur1mas/Wkhtmltopdf.git
libraries[wkhtmltopdf][download][revision] = 2dcfe68d594081b0a07fd67d8288ebfdcd90abae

; Used to send emails proposal attachments
libraries[phpmailer][download][type] = git
libraries[phpmailer][download][url] = https://github.com/Synchro/PHPMailer.git
libraries[phpmailer][download][revision] = v5.2.5 
