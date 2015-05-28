/** @file cmdline.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.5
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef CMDLINE_H
#define CMDLINE_H

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
#define CMDLINE_PARSER_PACKAGE "sort_demo"
#endif

#ifndef CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define CMDLINE_PARSER_PACKAGE_NAME "sort_demo"
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION "0.9"
#endif

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *detailed_help_help; /**< @brief Print help, including all details and hidden options, and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  int hwt_arg;	/**< @brief Number of HW Threads used to sort given amount of data..  */
  char * hwt_orig;	/**< @brief Number of HW Threads used to sort given amount of data. original value given at command line.  */
  const char *hwt_help; /**< @brief Number of HW Threads used to sort given amount of data. help description.  */
  int swt_arg;	/**< @brief Number of SW Threads used to sort given amount of data..  */
  char * swt_orig;	/**< @brief Number of SW Threads used to sort given amount of data. original value given at command line.  */
  const char *swt_help; /**< @brief Number of SW Threads used to sort given amount of data. help description.  */
  int mt_arg;	/**< @brief Number of MainCPU Threads used to sort given amount of data. (default='0').  */
  char * mt_orig;	/**< @brief Number of MainCPU Threads used to sort given amount of data. original value given at command line.  */
  const char *mt_help; /**< @brief Number of MainCPU Threads used to sort given amount of data. help description.  */
  int blocks_arg;	/**< @brief Number of blocks to sort. Per default one block is 8KB big..  */
  char * blocks_orig;	/**< @brief Number of blocks to sort. Per default one block is 8KB big. original value given at command line.  */
  const char *blocks_help; /**< @brief Number of blocks to sort. Per default one block is 8KB big. help description.  */
  int blocksize_arg;	/**< @brief Size of a block in bytes. Per default one block is 8KB big. (default='8192').  */
  char * blocksize_orig;	/**< @brief Size of a block in bytes. Per default one block is 8KB big. original value given at command line.  */
  const char *blocksize_help; /**< @brief Size of a block in bytes. Per default one block is 8KB big. help description.  */
  int thread_interface_arg;	/**< @brief Which interface shall be used to communicate with worker threads? (default='0').  */
  char * thread_interface_orig;	/**< @brief Which interface shall be used to communicate with worker threads? original value given at command line.  */
  const char *thread_interface_help; /**< @brief Which interface shall be used to communicate with worker threads? help description.  */
  int level_arg;	/**< @brief Shadowing level. Controls which error detection techniques are used. (default='3').  */
  char * level_orig;	/**< @brief Shadowing level. Controls which error detection techniques are used. original value given at command line.  */
  const char *level_help; /**< @brief Shadowing level. Controls which error detection techniques are used. help description.  */
  int shadow_flag;	/**< @brief Activates the shadowing subsystem. (default=off).  */
  const char *shadow_help; /**< @brief Activates the shadowing subsystem. help description.  */
  int shadow_schedule_arg;	/**< @brief Determines the algorithm of the shadow scheduler. (default='0').  */
  char * shadow_schedule_orig;	/**< @brief Determines the algorithm of the shadow scheduler. original value given at command line.  */
  const char *shadow_schedule_help; /**< @brief Determines the algorithm of the shadow scheduler. help description.  */
  int shadow_transmodal_flag;	/**< @brief Uses shadow threads of opposite modality. (default=off).  */
  const char *shadow_transmodal_help; /**< @brief Uses shadow threads of opposite modality. help description.  */
  int shadow_arb_err_det_flag;	/**< @brief Enable error detection in memory access arbiter. (default=off).  */
  const char *shadow_arb_err_det_help; /**< @brief Enable error detection in memory access arbiter. help description.  */
  int shadow_arb_buf_size_arg;	/**< @brief How much memory should be used to buffer memory requests? 0^= 1KB ... 7^= 128KB (default='3').  */
  char * shadow_arb_buf_size_orig;	/**< @brief How much memory should be used to buffer memory requests? 0^= 1KB ... 7^= 128KB original value given at command line.  */
  const char *shadow_arb_buf_size_help; /**< @brief How much memory should be used to buffer memory requests? 0^= 1KB ... 7^= 128KB help description.  */
  int error_type_arg;	/**< @brief One-hot coded bitfield that specifies error types to apply..  */
  char * error_type_orig;	/**< @brief One-hot coded bitfield that specifies error types to apply. original value given at command line.  */
  const char *error_type_help; /**< @brief One-hot coded bitfield that specifies error types to apply. help description.  */
  int error_time_arg;	/**< @brief before what block number shall the error be activated? -1 is at program start..  */
  char * error_time_orig;	/**< @brief before what block number shall the error be activated? -1 is at program start. original value given at command line.  */
  const char *error_time_help; /**< @brief before what block number shall the error be activated? -1 is at program start. help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int detailed_help_given ;	/**< @brief Whether detailed-help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int hwt_given ;	/**< @brief Whether hwt was given.  */
  unsigned int swt_given ;	/**< @brief Whether swt was given.  */
  unsigned int mt_given ;	/**< @brief Whether mt was given.  */
  unsigned int blocks_given ;	/**< @brief Whether blocks was given.  */
  unsigned int blocksize_given ;	/**< @brief Whether blocksize was given.  */
  unsigned int thread_interface_given ;	/**< @brief Whether thread-interface was given.  */
  unsigned int level_given ;	/**< @brief Whether level was given.  */
  unsigned int shadow_given ;	/**< @brief Whether shadow was given.  */
  unsigned int shadow_schedule_given ;	/**< @brief Whether shadow-schedule was given.  */
  unsigned int shadow_transmodal_given ;	/**< @brief Whether shadow-transmodal was given.  */
  unsigned int shadow_arb_err_det_given ;	/**< @brief Whether shadow-arb-err-det was given.  */
  unsigned int shadow_arb_buf_size_given ;	/**< @brief Whether shadow-arb-buf-size was given.  */
  unsigned int error_type_given ;	/**< @brief Whether error-type was given.  */
  unsigned int error_time_given ;	/**< @brief Whether error-time was given.  */

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
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];
/** @brief all the lines making the detailed help output (including hidden options and details) */
extern const char *gengetopt_args_info_detailed_help[];

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
 * Print the detailed help (including hidden options and details)
 */
void cmdline_parser_print_detailed_help(void);
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

extern const char *cmdline_parser_thread_interface_values[];  /**< @brief Possible values for thread-interface. */
extern const char *cmdline_parser_level_values[];  /**< @brief Possible values for level. */
extern const char *cmdline_parser_shadow_schedule_values[];  /**< @brief Possible values for shadow-schedule. */
extern const char *cmdline_parser_shadow_arb_buf_size_values[];  /**< @brief Possible values for shadow-arb-buf-size. */


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMDLINE_H */
