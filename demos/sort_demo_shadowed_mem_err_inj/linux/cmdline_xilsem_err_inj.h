/** @file cmdline_xilsem_err_inj.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.6
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef CMDLINE_XILSEM_ERR_INJ_H
#define CMDLINE_XILSEM_ERR_INJ_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define CMDLINE_PARSER_PACKAGE "xilsem_err_inj"
#endif

#ifndef CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define CMDLINE_PARSER_PACKAGE_NAME "xilsem_err_inj"
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION "0.9"
#endif

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  int* paddress_arg;	/**< @brief Physical address to inject fault to. Format: <blockType 0-3>, <halfAddress 0-1>, <rowAddress 0-31>, <columnAddress 0-255>,<minorAddress 0-127>, <wordAddress 0-127>,<bitAddress 0-31>.  */
  char ** paddress_orig;	/**< @brief Physical address to inject fault to. Format: <blockType 0-3>, <halfAddress 0-1>, <rowAddress 0-31>, <columnAddress 0-255>,<minorAddress 0-127>, <wordAddress 0-127>,<bitAddress 0-31> original value given at command line.  */
  unsigned int paddress_min; /**< @brief Physical address to inject fault to. Format: <blockType 0-3>, <halfAddress 0-1>, <rowAddress 0-31>, <columnAddress 0-255>,<minorAddress 0-127>, <wordAddress 0-127>,<bitAddress 0-31>'s minimum occurreces */
  unsigned int paddress_max; /**< @brief Physical address to inject fault to. Format: <blockType 0-3>, <halfAddress 0-1>, <rowAddress 0-31>, <columnAddress 0-255>,<minorAddress 0-127>, <wordAddress 0-127>,<bitAddress 0-31>'s maximum occurreces */
  const char *paddress_help; /**< @brief Physical address to inject fault to. Format: <blockType 0-3>, <halfAddress 0-1>, <rowAddress 0-31>, <columnAddress 0-255>,<minorAddress 0-127>, <wordAddress 0-127>,<bitAddress 0-31> help description.  */
  int* saddress_arg;	/**< @brief Slice area to inject fault to. Unspecified part will be choosen randomly. Format: <bottomLeftX>,<bottomLeftY>, <topRightX>,<topRightY>.  */
  char ** saddress_orig;	/**< @brief Slice area to inject fault to. Unspecified part will be choosen randomly. Format: <bottomLeftX>,<bottomLeftY>, <topRightX>,<topRightY> original value given at command line.  */
  unsigned int saddress_min; /**< @brief Slice area to inject fault to. Unspecified part will be choosen randomly. Format: <bottomLeftX>,<bottomLeftY>, <topRightX>,<topRightY>'s minimum occurreces */
  unsigned int saddress_max; /**< @brief Slice area to inject fault to. Unspecified part will be choosen randomly. Format: <bottomLeftX>,<bottomLeftY>, <topRightX>,<topRightY>'s maximum occurreces */
  const char *saddress_help; /**< @brief Slice area to inject fault to. Unspecified part will be choosen randomly. Format: <bottomLeftX>,<bottomLeftY>, <topRightX>,<topRightY> help description.  */
  int* ptranslate_arg;	/**< @brief Translate slice address to physical address..  */
  char ** ptranslate_orig;	/**< @brief Translate slice address to physical address. original value given at command line.  */
  unsigned int ptranslate_min; /**< @brief Translate slice address to physical address.'s minimum occurreces */
  unsigned int ptranslate_max; /**< @brief Translate slice address to physical address.'s maximum occurreces */
  const char *ptranslate_help; /**< @brief Translate slice address to physical address. help description.  */
  int full_word_flag;	/**< @brief Ignores the bit part of the address and instead injects errors to all bits of the given word of an address. (default=off).  */
  const char *full_word_help; /**< @brief Ignores the bit part of the address and instead injects errors to all bits of the given word of an address. help description.  */
  int verbose_flag;	/**< @brief Spits out detailed information about what's going on. (default=off).  */
  const char *verbose_help; /**< @brief Spits out detailed information about what's going on. help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int paddress_given ;	/**< @brief Whether paddress was given.  */
  unsigned int saddress_given ;	/**< @brief Whether saddress was given.  */
  unsigned int ptranslate_given ;	/**< @brief Whether ptranslate was given.  */
  unsigned int full_word_given ;	/**< @brief Whether full-word was given.  */
  unsigned int verbose_given ;	/**< @brief Whether verbose was given.  */

} ;

/** @brief The additional parameters to pass to parser functions */
struct cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief the description string of the program */
extern const char *gengetopt_args_info_description;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser (int argc, char **argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
int cmdline_parser2 (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_ext (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_dump(FILE *outfile,
  struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void cmdline_parser_print_help(void);
/**
 * Print the version
 */
void cmdline_parser_print_version(void);

/**
 * Initializes all the fields a cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void cmdline_parser_params_init(struct cmdline_parser_params *params);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized cmdline_parser_params structure
 */
struct cmdline_parser_params *cmdline_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void cmdline_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void cmdline_parser_free (struct gengetopt_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMDLINE_XILSEM_ERR_INJ_H */
