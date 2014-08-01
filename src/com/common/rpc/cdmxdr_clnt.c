/*
* Copyright (C) 2014, Fraunhofer Institute for Open Communication Systems FOKUS
*/

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "cdmxdr.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

int *
cdm_mediakeys_rpc_1(char **argp, CLIENT *clnt)
{
  static int clnt_res;

  memset((char *)&clnt_res, 0, sizeof(clnt_res));
  if (clnt_call (clnt, CDM_MEDIAKEYS_RPC,
    (xdrproc_t) xdr_wrapstring, (caddr_t) argp,
    (xdrproc_t) xdr_int, (caddr_t) &clnt_res,
    TIMEOUT) != RPC_SUCCESS) {
    return (NULL);
  }
  return (&clnt_res);
}

int *
cdm_istypesupported_rpc_1(type_request *argp, CLIENT *clnt)
{
  static int clnt_res;

  memset((char *)&clnt_res, 0, sizeof(clnt_res));
  if (clnt_call (clnt, CDM_ISTYPESUPPORTED_RPC,
    (xdrproc_t) xdr_type_request, (caddr_t) argp,
    (xdrproc_t) xdr_int, (caddr_t) &clnt_res,
    TIMEOUT) != RPC_SUCCESS) {
    return (NULL);
  }
  return (&clnt_res);
}

session_response *
createsession_rpc_1(session *argp, CLIENT *clnt)
{
  static session_response clnt_res;

  memset((char *)&clnt_res, 0, sizeof(clnt_res));
  if (clnt_call (clnt, CREATESESSION_RPC,
    (xdrproc_t) xdr_session, (caddr_t) argp,
    (xdrproc_t) xdr_session_response, (caddr_t) &clnt_res,
    TIMEOUT) != RPC_SUCCESS) {
    return (NULL);
  }
  return (&clnt_res);
}

int *
run_rpc_1(params_run *argp, CLIENT *clnt)
{
  static int clnt_res;

  memset((char *)&clnt_res, 0, sizeof(clnt_res));
  if (clnt_call (clnt, RUN_RPC,
    (xdrproc_t) xdr_params_run, (caddr_t) argp,
    (xdrproc_t) xdr_int, (caddr_t) &clnt_res,
    TIMEOUT) != RPC_SUCCESS) {
    return (NULL);
  }
  return (&clnt_res);
}

int *
update_rpc_1(params_update *argp, CLIENT *clnt)
{
  static int clnt_res;

  memset((char *)&clnt_res, 0, sizeof(clnt_res));
  if (clnt_call (clnt, UPDATE_RPC,
    (xdrproc_t) xdr_params_update, (caddr_t) argp,
    (xdrproc_t) xdr_int, (caddr_t) &clnt_res,
    TIMEOUT) != RPC_SUCCESS) {
    return (NULL);
  }
  return (&clnt_res);
}

int *
close_rpc_1(params_close *argp, CLIENT *clnt)
{
  static int clnt_res;

  memset((char *)&clnt_res, 0, sizeof(clnt_res));
  if (clnt_call (clnt, CLOSE_RPC,
    (xdrproc_t) xdr_params_close, (caddr_t) argp,
    (xdrproc_t) xdr_int, (caddr_t) &clnt_res,
    TIMEOUT) != RPC_SUCCESS) {
    return (NULL);
  }
  return (&clnt_res);
}

mes_response *
cdm_mediaenginesession_rpc_1(me_data *argp, CLIENT *clnt)
{
  static mes_response clnt_res;

  memset((char *)&clnt_res, 0, sizeof(clnt_res));
  if (clnt_call (clnt, CDM_MEDIAENGINESESSION_RPC,
    (xdrproc_t) xdr_me_data, (caddr_t) argp,
    (xdrproc_t) xdr_mes_response, (caddr_t) &clnt_res,
    TIMEOUT) != RPC_SUCCESS) {
    return (NULL);
  }
  return (&clnt_res);
}

decrypted_data *
decrypt_1(data *argp, CLIENT *clnt)
{
  static decrypted_data clnt_res;

  memset((char *)&clnt_res, 0, sizeof(clnt_res));
  if (clnt_call (clnt, DECRYPT,
    (xdrproc_t) xdr_data, (caddr_t) argp,
    (xdrproc_t) xdr_decrypted_data, (caddr_t) &clnt_res,
    TIMEOUT) != RPC_SUCCESS) {
    return (NULL);
  }
  return (&clnt_res);
}

int *
async_1(u_long *argp, CLIENT *clnt)
{
  static int clnt_res;

  memset((char *)&clnt_res, 0, sizeof(clnt_res));
  if (clnt_call (clnt, async,
    (xdrproc_t) xdr_u_long, (caddr_t) argp,
    (xdrproc_t) xdr_int, (caddr_t) &clnt_res,
    TIMEOUT) != RPC_SUCCESS) {
    return (NULL);
  }
  return (&clnt_res);
}