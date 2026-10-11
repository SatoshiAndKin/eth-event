#ifndef MYPYC_LIBRT_INTERNAL_eth_event_H
#define MYPYC_LIBRT_INTERNAL_eth_event_H
#include <Python.h>
#include <CPy.h>
#include "__native_eth_event.h"

int CPyGlobalsInit(void);

extern CPyModuleLockAPI *CPyModuleLockAPI_eth_event;
extern PyObject *CPyStatics[149];
extern const char * const CPyLit_Str[];
extern const char * const CPyLit_Bytes[];
extern const char * const CPyLit_Int[];
extern const double CPyLit_Float[];
extern const double CPyLit_Complex[];
extern const int CPyLit_Tuple[];
extern const int CPyLit_FrozenSet[];
extern CPyModule *CPyModule_eth_event__internal;
extern CPyImportState CPyImportState_eth_event;
extern CPyModuleCache CPyModule_eth_event;
extern PyObject *CPyStatic_eth_event___globals;
extern CPyModuleCache CPyModule_builtins;
extern CPyModule *CPyModule_eth_event___main__internal;
extern CPyImportState CPyImportState_eth_event___main;
extern CPyModuleCache CPyModule_eth_event___main;
extern int CPyExec_eth_event(PyObject *module);
extern PyObject *CPyInit_eth_event(void);
extern PyObject *CPyInitOnly_eth_event(void);
extern PyObject *CPyStatic_main___globals;
extern CPyModuleCache CPyModule_functools;
extern CPyModuleCache CPyModule_re;
extern CPyModuleCache CPyModule_collections___abc;
extern CPyModuleCache CPyModule_typing;
extern CPyModuleCache CPyModule_cchecksum;
extern CPyModuleCache CPyModule_faster_hexbytes;
extern CPyModuleCache CPyModule_eth_hash;
extern CPyModuleCache CPyModule_eth_typing;
extern CPyModuleCache CPyModule_faster_eth_abi;
extern CPyModuleCache CPyModule_faster_eth_abi___exceptions;
extern CPyModuleCache CPyModule_typing_extensions;
extern int CPyExec_eth_event___main(PyObject *module);
extern PyObject *CPyInit_eth_event___main(void);
extern PyObject *CPyInitOnly_eth_event___main(void);
extern char CPyDef_eth_event_____top_level__(void);
extern tuple_T3OOO CPyStatic_main___ADD_LOG_ENTRIES;
extern PyObject *CPyStatic_main___HexBytes;
extern PyObject *CPyStatic_main___to_checksum_address;
extern PyObject *CPyStatic_main___keccak;
extern PyObject *CPyStatic_main___lru_cache;
extern PyObject *CPyStatic_main____tuple_match;
extern PyTypeObject *CPyType_main___ABIError;
extern PyTypeObject *CPyType_main___EventError;
extern PyTypeObject *CPyType_main___StructLogError;
extern PyTypeObject *CPyType_main___UnknownEvent;
extern PyTypeObject *CPyType_main___EventData;
extern PyTypeObject *CPyType_main___DecodedEvent;
extern PyTypeObject *CPyType_main___NonDecodedEvent;
extern PyTypeObject *CPyType_main___TopicMapData;
extern PyTypeObject *CPyType_main____TraceStep;
extern PyObject *CPyDef_main___get_log_topic(PyObject *cpy_r_event_abi);
extern PyObject *CPyPy_main___get_log_topic(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main___get_topic_map(PyObject *cpy_r_abi);
extern PyObject *CPyPy_main___get_topic_map(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main___decode_log(PyObject *cpy_r_log, PyObject *cpy_r_topic_map, PyObject *cpy_r___checksum_func);
extern PyObject *CPyPy_main___decode_log(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main___decode_logs(PyObject *cpy_r_logs, PyObject *cpy_r_topic_map, char cpy_r_allow_undecoded);
extern PyObject *CPyPy_main___decode_logs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef_main____append_additional_log_data(PyObject *cpy_r_log, PyObject *cpy_r_event);
extern PyObject *CPyPy_main____append_additional_log_data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main___decode_traceTransaction(PyObject *cpy_r_struct_logs, PyObject *cpy_r_topic_map, char cpy_r_allow_undecoded, PyObject *cpy_r_initial_address);
extern PyObject *CPyPy_main___decode_traceTransaction(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main____0xstring(PyObject *cpy_r_value);
extern PyObject *CPyPy_main____0xstring(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main____params(PyObject *cpy_r_abi_params);
extern PyObject *CPyPy_main____params(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern PyObject *CPyDef_main____decode(PyObject *cpy_r_inputs, PyObject *cpy_r_topics, PyObject *cpy_r_data);
extern PyObject *CPyPy_main____decode(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef_main_____top_level__(void);
#endif
