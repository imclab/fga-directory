<?php
/**
 * @file
 * occupations_administration.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function occupations_administration_default_rules_configuration() {
  $items = array();
  $items['rules_comment_notification'] = entity_import('rules_config', '{ "rules_comment_notification" : {
      "LABEL" : "Comment notification [admin]",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "notifications" ],
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : [ "comment_insert" ],
      "IF" : [
        { "data_is" : { "data" : [ "site:url" ], "value" : "http:\\/\\/directory.occupy.net\\/" } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "5" : "5" } },
            "subject" : "A comment has been added to [comment:node:title] on [site:name]",
            "message" : "A comment has been added to [site:name] ([site:url]): \\r\\n\\r\\nNode:\\r\\n[comment:node:title] ([comment:node:url])\\r\\n\\r\\nAuthor:\\r\\n[comment:name]\\r\\n\\r\\nBody:\\r\\n[comment:body]\\r\\n\\r\\nClick here to moderate the comment: [comment:edit-url]"
          }
        }
      ]
    }
  }');
  $items['rules_new_occupation_notification'] = entity_import('rules_config', '{ "rules_new_occupation_notification" : {
      "LABEL" : "New occupation notification",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "notifications" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "occupation" : "occupation" } }
          }
        },
        { "user_has_role" : { "account" : [ "node:author" ], "roles" : { "value" : { "2" : "2" } } } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "5" : "5" } },
            "subject" : "[node:title] has been added to [site:name] for approval",
            "message" : "An occupation has been added to [site:name] ([site:url]) for approval:\\r\\n\\r\\nNode:\\r\\n[node:title]\\r\\n\\r\\nAuthor:\\r\\n[node:author:name]\\r\\n\\r\\nLocation:\\r\\n[node:field_occupation_address]\\r\\n\\r\\nDescription:\\r\\n[node:field_occupation_description]\\r\\n\\r\\nClick here to view the occupation: [node:url]"
          }
        },
        { "drupal_message" : { "message" : "Thank you for submitting an occupation. You will be notified when it is added to the site, after approval by one of our moderators." } }
      ]
    }
  }');
  $items['rules_occupation_approved_notification'] = entity_import('rules_config', '{ "rules_occupation_approved_notification" : {
      "LABEL" : "Occupation approved notification",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "notifications" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "occupation" : "occupation" } }
          }
        },
        { "node_is_published" : { "node" : [ "node" ] } },
        { "NOT node_is_published" : { "node" : [ "node-unchanged" ] } },
        { "user_has_role" : { "account" : [ "node:author" ], "roles" : { "value" : { "2" : "2" } } } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:author:mail]",
            "subject" : "[node:title] is now live on [site:name]!",
            "message" : "[node:author:name],\\r\\n\\r\\n[node:title], the occupation you submitted to [site:name], has been approved and is now live!\\r\\n\\r\\nYou can view and edit your occupation by clicking here: [node:url]\\r\\n\\r\\n- The Occupy Directory team"
          }
        }
      ]
    }
  }');
  $items['rules_redirect_occupation_curators_at_login'] = entity_import('rules_config', '{ "rules_redirect_occupation_curators_at_login" : {
      "LABEL" : "Redirect Occupation Curators at login",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Redirect Occupation Curators at login" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_login" ],
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "5" : "5" } } } }
      ],
      "DO" : [
        { "redirect" : {
            "url" : "occupations\\/manage\\/[account:field-term-geographic-area]",
            "force" : 0
          }
        }
      ]
    }
  }');
  return $items;
}
