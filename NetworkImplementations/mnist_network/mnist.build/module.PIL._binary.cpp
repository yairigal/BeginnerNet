/* Generated code for Python source for module 'PIL._binary'
 * created by Nuitka version 0.5.29.4
 *
 * This code is in part copyright 2017 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_PIL$_binary is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$_binary;
PyDictObject *moduledict_PIL$_binary;

/* The module constants used, if any. */
extern PyObject *const_tuple_str_plain_i_tuple;
static PyObject *const_str_plain_si32le;
extern PyObject *const_str_plain_i16be;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_pack;
static PyObject *const_str_digest_1ff626b889dd5576e2ca2c530c9f3ff3;
static PyObject *const_str_digest_b22ef13125ae928b4c157e2daef9f13a;
extern PyObject *const_tuple_str_plain_c_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_i;
static PyObject *const_str_digest_5f69f32ac0594625445ce8fe59f22737;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_i8;
static PyObject *const_str_digest_0d795948ac026c8895e54d5dd89cafe4;
static PyObject *const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_struct;
extern PyObject *const_str_plain_unpack;
static PyObject *const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0;
static PyObject *const_tuple_str_plain_unpack_str_plain_pack_tuple;
static PyObject *const_str_digest_fa89ef8eb597fd699e5ba0a6f94b1683;
extern PyObject *const_str_plain_i32be;
extern PyObject *const_int_pos_255;
static PyObject *const_str_digest_4c7efb018ed6263311cb5a77008a1217;
static PyObject *const_str_digest_c6ccceacb61480b9230ce3733fbc80d1;
static PyObject *const_str_digest_d7a767126ce8fdf55617407b24bcf832;
extern PyObject *const_str_plain_o32be;
static PyObject *const_str_digest_8c543a885745efa767b39eac92a01934;
extern PyObject *const_str_plain_i32le;
extern PyObject *const_str_digest_8e5335fb02f73f9b285b14387631d654;
extern PyObject *const_str_plain_o;
extern PyObject *const_str_plain_o16le;
extern PyObject *const_str_plain_o32le;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_i16le;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_o8;
extern PyObject *const_int_pos_4;
static PyObject *const_str_digest_e32643bbdc087df0169bdbc4edb2d9da;
static PyObject *const_str_plain_si16le;
static PyObject *const_tuple_str_plain_c_str_plain_o_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_o16be;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_si32le = UNSTREAM_STRING( &constant_bin[ 107613 ], 6, 1 );
    const_str_digest_1ff626b889dd5576e2ca2c530c9f3ff3 = UNSTREAM_STRING( &constant_bin[ 107619 ], 11, 0 );
    const_str_digest_b22ef13125ae928b4c157e2daef9f13a = UNSTREAM_STRING( &constant_bin[ 107630 ], 153, 0 );
    const_str_digest_5f69f32ac0594625445ce8fe59f22737 = UNSTREAM_STRING( &constant_bin[ 107783 ], 58, 0 );
    const_str_digest_0d795948ac026c8895e54d5dd89cafe4 = UNSTREAM_STRING( &constant_bin[ 107841 ], 156, 0 );
    const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0 = UNSTREAM_STRING( &constant_bin[ 107997 ], 2, 0 );
    const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0 = UNSTREAM_STRING( &constant_bin[ 107999 ], 2, 0 );
    const_tuple_str_plain_unpack_str_plain_pack_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_unpack_str_plain_pack_tuple, 0, const_str_plain_unpack ); Py_INCREF( const_str_plain_unpack );
    PyTuple_SET_ITEM( const_tuple_str_plain_unpack_str_plain_pack_tuple, 1, const_str_plain_pack ); Py_INCREF( const_str_plain_pack );
    const_str_digest_fa89ef8eb597fd699e5ba0a6f94b1683 = UNSTREAM_STRING( &constant_bin[ 108001 ], 156, 0 );
    const_str_digest_4c7efb018ed6263311cb5a77008a1217 = UNSTREAM_STRING( &constant_bin[ 108157 ], 2, 0 );
    const_str_digest_c6ccceacb61480b9230ce3733fbc80d1 = UNSTREAM_STRING( &constant_bin[ 29173 ], 2, 0 );
    const_str_digest_d7a767126ce8fdf55617407b24bcf832 = UNSTREAM_STRING( &constant_bin[ 108159 ], 20, 0 );
    const_str_digest_8c543a885745efa767b39eac92a01934 = UNSTREAM_STRING( &constant_bin[ 108179 ], 153, 0 );
    const_str_digest_e32643bbdc087df0169bdbc4edb2d9da = UNSTREAM_STRING( &constant_bin[ 69509 ], 2, 0 );
    const_str_plain_si16le = UNSTREAM_STRING( &constant_bin[ 108332 ], 6, 1 );
    const_tuple_str_plain_c_str_plain_o_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_o_tuple, 0, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_o_tuple, 1, const_str_plain_o ); Py_INCREF( const_str_plain_o );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_PIL$_binary( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a371a59752b6fe6410141e49aa62d203;
static PyCodeObject *codeobj_6a9742ee3ac3e0ad62342efa61478936;
static PyCodeObject *codeobj_b7df4fd76164e8d14f80db368b2f0cfb;
static PyCodeObject *codeobj_6f18e23ef304baf94f798b0f7132b6fb;
static PyCodeObject *codeobj_f037ad90ff54f5180f299f696acd8c8e;
static PyCodeObject *codeobj_6b034ea5ec86506061757c271114cfac;
static PyCodeObject *codeobj_76b0c9b8ac347caf50b3ee061a8f1c3c;
static PyCodeObject *codeobj_2db9ef03dd689815ac131daeec4ba533;
static PyCodeObject *codeobj_1730e54b76ba2c1d2a316ffd800325be;
static PyCodeObject *codeobj_23d7c662a78f7577611825cebca01215;
static PyCodeObject *codeobj_ce3810c8187cf734fea754330188a79e;
static PyCodeObject *codeobj_bfef7036bf9ebf765212eb3d25db296a;
static PyCodeObject *codeobj_48b8636144cbfecb1a84480e5a66b8fb;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_5f69f32ac0594625445ce8fe59f22737;
    codeobj_a371a59752b6fe6410141e49aa62d203 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_d7a767126ce8fdf55617407b24bcf832, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_6a9742ee3ac3e0ad62342efa61478936 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_i16be, 71, const_tuple_str_plain_c_str_plain_o_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b7df4fd76164e8d14f80db368b2f0cfb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_i16le, 31, const_tuple_str_plain_c_str_plain_o_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6f18e23ef304baf94f798b0f7132b6fb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_i32be, 75, const_tuple_str_plain_c_str_plain_o_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f037ad90ff54f5180f299f696acd8c8e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_i32le, 51, const_tuple_str_plain_c_str_plain_o_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6b034ea5ec86506061757c271114cfac = MAKE_CODEOBJ( module_filename_obj, const_str_plain_i8, 23, const_tuple_str_plain_c_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_76b0c9b8ac347caf50b3ee061a8f1c3c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_o16be, 88, const_tuple_str_plain_i_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2db9ef03dd689815ac131daeec4ba533 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_o16le, 80, const_tuple_str_plain_i_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1730e54b76ba2c1d2a316ffd800325be = MAKE_CODEOBJ( module_filename_obj, const_str_plain_o32be, 92, const_tuple_str_plain_i_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_23d7c662a78f7577611825cebca01215 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_o32le, 84, const_tuple_str_plain_i_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ce3810c8187cf734fea754330188a79e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_o8, 26, const_tuple_str_plain_i_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bfef7036bf9ebf765212eb3d25db296a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_si16le, 41, const_tuple_str_plain_c_str_plain_o_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_48b8636144cbfecb1a84480e5a66b8fb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_si32le, 61, const_tuple_str_plain_c_str_plain_o_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_10_i32be( PyObject *defaults );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_11_o16le(  );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_12_o32le(  );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_13_o16be(  );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_14_o32be(  );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_3_i8(  );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_4_o8(  );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_5_i16le( PyObject *defaults );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_6_si16le( PyObject *defaults );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_7_i32le( PyObject *defaults );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_8_si32le( PyObject *defaults );


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_9_i16be( PyObject *defaults );


// The module function definitions.
static PyObject *impl_PIL$_binary$$$function_3_i8( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_6b034ea5ec86506061757c271114cfac = NULL;

    struct Nuitka_FrameObject *frame_6b034ea5ec86506061757c271114cfac;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6b034ea5ec86506061757c271114cfac, codeobj_6b034ea5ec86506061757c271114cfac, module_PIL$_binary, sizeof(void *) );
    frame_6b034ea5ec86506061757c271114cfac = cache_frame_6b034ea5ec86506061757c271114cfac;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6b034ea5ec86506061757c271114cfac );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6b034ea5ec86506061757c271114cfac ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_c;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = (PyObject *)&PyLong_Type;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_return_value = par_c;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = par_c;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    condexpr_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b034ea5ec86506061757c271114cfac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b034ea5ec86506061757c271114cfac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b034ea5ec86506061757c271114cfac );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6b034ea5ec86506061757c271114cfac, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6b034ea5ec86506061757c271114cfac->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6b034ea5ec86506061757c271114cfac, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6b034ea5ec86506061757c271114cfac,
        type_description_1,
        par_c
    );


    // Release cached frame.
    if ( frame_6b034ea5ec86506061757c271114cfac == cache_frame_6b034ea5ec86506061757c271114cfac )
    {
        Py_DECREF( frame_6b034ea5ec86506061757c271114cfac );
    }
    cache_frame_6b034ea5ec86506061757c271114cfac = NULL;

    assertFrameObject( frame_6b034ea5ec86506061757c271114cfac );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_3_i8 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_c );
    par_c = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_c );
    par_c = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_3_i8 );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_PIL$_binary$$$function_4_o8( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_bytes_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_ce3810c8187cf734fea754330188a79e = NULL;

    struct Nuitka_FrameObject *frame_ce3810c8187cf734fea754330188a79e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ce3810c8187cf734fea754330188a79e, codeobj_ce3810c8187cf734fea754330188a79e, module_PIL$_binary, sizeof(void *) );
    frame_ce3810c8187cf734fea754330188a79e = cache_frame_ce3810c8187cf734fea754330188a79e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ce3810c8187cf734fea754330188a79e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ce3810c8187cf734fea754330188a79e ) == 2 ); // Frame stack

    // Framed code:
    tmp_bytes_arg_1 = PyTuple_New( 1 );
    tmp_left_name_1 = par_i;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_255;
    tmp_tuple_element_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_bytes_arg_1 );

        exception_lineno = 27;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_bytes_arg_1, 0, tmp_tuple_element_1 );
    tmp_return_value = BUILTIN_BYTES3( tmp_bytes_arg_1, NULL, NULL );
    Py_DECREF( tmp_bytes_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce3810c8187cf734fea754330188a79e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce3810c8187cf734fea754330188a79e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce3810c8187cf734fea754330188a79e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ce3810c8187cf734fea754330188a79e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ce3810c8187cf734fea754330188a79e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ce3810c8187cf734fea754330188a79e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ce3810c8187cf734fea754330188a79e,
        type_description_1,
        par_i
    );


    // Release cached frame.
    if ( frame_ce3810c8187cf734fea754330188a79e == cache_frame_ce3810c8187cf734fea754330188a79e )
    {
        Py_DECREF( frame_ce3810c8187cf734fea754330188a79e );
    }
    cache_frame_ce3810c8187cf734fea754330188a79e = NULL;

    assertFrameObject( frame_ce3810c8187cf734fea754330188a79e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_4_o8 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_i );
    par_i = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_i );
    par_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_4_o8 );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_PIL$_binary$$$function_5_i16le( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_o = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_start_name_1;
    PyObject *tmp_step_name_1;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_b7df4fd76164e8d14f80db368b2f0cfb = NULL;

    struct Nuitka_FrameObject *frame_b7df4fd76164e8d14f80db368b2f0cfb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b7df4fd76164e8d14f80db368b2f0cfb, codeobj_b7df4fd76164e8d14f80db368b2f0cfb, module_PIL$_binary, sizeof(void *)+sizeof(void *) );
    frame_b7df4fd76164e8d14f80db368b2f0cfb = cache_frame_b7df4fd76164e8d14f80db368b2f0cfb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b7df4fd76164e8d14f80db368b2f0cfb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b7df4fd76164e8d14f80db368b2f0cfb ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_unpack );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unpack );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unpack" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0;
    tmp_subscribed_name_2 = par_c;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_start_name_1 = par_o;

    CHECK_OBJECT( tmp_start_name_1 );
    tmp_left_name_1 = par_o;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_2;
    tmp_stop_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_stop_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_1 = Py_None;
    tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_stop_name_1 );
    assert( tmp_subscript_name_1 != NULL );
    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_b7df4fd76164e8d14f80db368b2f0cfb->m_frame.f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7df4fd76164e8d14f80db368b2f0cfb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7df4fd76164e8d14f80db368b2f0cfb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7df4fd76164e8d14f80db368b2f0cfb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b7df4fd76164e8d14f80db368b2f0cfb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b7df4fd76164e8d14f80db368b2f0cfb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b7df4fd76164e8d14f80db368b2f0cfb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b7df4fd76164e8d14f80db368b2f0cfb,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame.
    if ( frame_b7df4fd76164e8d14f80db368b2f0cfb == cache_frame_b7df4fd76164e8d14f80db368b2f0cfb )
    {
        Py_DECREF( frame_b7df4fd76164e8d14f80db368b2f0cfb );
    }
    cache_frame_b7df4fd76164e8d14f80db368b2f0cfb = NULL;

    assertFrameObject( frame_b7df4fd76164e8d14f80db368b2f0cfb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_5_i16le );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_c );
    par_c = NULL;

    Py_XDECREF( par_o );
    par_o = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_c );
    par_c = NULL;

    Py_XDECREF( par_o );
    par_o = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_5_i16le );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_PIL$_binary$$$function_6_si16le( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_o = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_start_name_1;
    PyObject *tmp_step_name_1;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_bfef7036bf9ebf765212eb3d25db296a = NULL;

    struct Nuitka_FrameObject *frame_bfef7036bf9ebf765212eb3d25db296a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bfef7036bf9ebf765212eb3d25db296a, codeobj_bfef7036bf9ebf765212eb3d25db296a, module_PIL$_binary, sizeof(void *)+sizeof(void *) );
    frame_bfef7036bf9ebf765212eb3d25db296a = cache_frame_bfef7036bf9ebf765212eb3d25db296a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bfef7036bf9ebf765212eb3d25db296a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bfef7036bf9ebf765212eb3d25db296a ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_unpack );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unpack );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unpack" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_4c7efb018ed6263311cb5a77008a1217;
    tmp_subscribed_name_2 = par_c;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_start_name_1 = par_o;

    CHECK_OBJECT( tmp_start_name_1 );
    tmp_left_name_1 = par_o;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_2;
    tmp_stop_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_stop_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_1 = Py_None;
    tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_stop_name_1 );
    assert( tmp_subscript_name_1 != NULL );
    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_bfef7036bf9ebf765212eb3d25db296a->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bfef7036bf9ebf765212eb3d25db296a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bfef7036bf9ebf765212eb3d25db296a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bfef7036bf9ebf765212eb3d25db296a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bfef7036bf9ebf765212eb3d25db296a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bfef7036bf9ebf765212eb3d25db296a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bfef7036bf9ebf765212eb3d25db296a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bfef7036bf9ebf765212eb3d25db296a,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame.
    if ( frame_bfef7036bf9ebf765212eb3d25db296a == cache_frame_bfef7036bf9ebf765212eb3d25db296a )
    {
        Py_DECREF( frame_bfef7036bf9ebf765212eb3d25db296a );
    }
    cache_frame_bfef7036bf9ebf765212eb3d25db296a = NULL;

    assertFrameObject( frame_bfef7036bf9ebf765212eb3d25db296a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_6_si16le );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_c );
    par_c = NULL;

    Py_XDECREF( par_o );
    par_o = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_c );
    par_c = NULL;

    Py_XDECREF( par_o );
    par_o = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_6_si16le );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_PIL$_binary$$$function_7_i32le( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_o = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_start_name_1;
    PyObject *tmp_step_name_1;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_f037ad90ff54f5180f299f696acd8c8e = NULL;

    struct Nuitka_FrameObject *frame_f037ad90ff54f5180f299f696acd8c8e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f037ad90ff54f5180f299f696acd8c8e, codeobj_f037ad90ff54f5180f299f696acd8c8e, module_PIL$_binary, sizeof(void *)+sizeof(void *) );
    frame_f037ad90ff54f5180f299f696acd8c8e = cache_frame_f037ad90ff54f5180f299f696acd8c8e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f037ad90ff54f5180f299f696acd8c8e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f037ad90ff54f5180f299f696acd8c8e ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_unpack );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unpack );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unpack" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0;
    tmp_subscribed_name_2 = par_c;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_start_name_1 = par_o;

    CHECK_OBJECT( tmp_start_name_1 );
    tmp_left_name_1 = par_o;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_4;
    tmp_stop_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_stop_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_1 = Py_None;
    tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_stop_name_1 );
    assert( tmp_subscript_name_1 != NULL );
    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_f037ad90ff54f5180f299f696acd8c8e->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f037ad90ff54f5180f299f696acd8c8e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f037ad90ff54f5180f299f696acd8c8e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f037ad90ff54f5180f299f696acd8c8e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f037ad90ff54f5180f299f696acd8c8e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f037ad90ff54f5180f299f696acd8c8e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f037ad90ff54f5180f299f696acd8c8e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f037ad90ff54f5180f299f696acd8c8e,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame.
    if ( frame_f037ad90ff54f5180f299f696acd8c8e == cache_frame_f037ad90ff54f5180f299f696acd8c8e )
    {
        Py_DECREF( frame_f037ad90ff54f5180f299f696acd8c8e );
    }
    cache_frame_f037ad90ff54f5180f299f696acd8c8e = NULL;

    assertFrameObject( frame_f037ad90ff54f5180f299f696acd8c8e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_7_i32le );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_c );
    par_c = NULL;

    Py_XDECREF( par_o );
    par_o = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_c );
    par_c = NULL;

    Py_XDECREF( par_o );
    par_o = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_7_i32le );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_PIL$_binary$$$function_8_si32le( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_o = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_start_name_1;
    PyObject *tmp_step_name_1;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_48b8636144cbfecb1a84480e5a66b8fb = NULL;

    struct Nuitka_FrameObject *frame_48b8636144cbfecb1a84480e5a66b8fb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_48b8636144cbfecb1a84480e5a66b8fb, codeobj_48b8636144cbfecb1a84480e5a66b8fb, module_PIL$_binary, sizeof(void *)+sizeof(void *) );
    frame_48b8636144cbfecb1a84480e5a66b8fb = cache_frame_48b8636144cbfecb1a84480e5a66b8fb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_48b8636144cbfecb1a84480e5a66b8fb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_48b8636144cbfecb1a84480e5a66b8fb ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_unpack );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unpack );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unpack" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_c6ccceacb61480b9230ce3733fbc80d1;
    tmp_subscribed_name_2 = par_c;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_start_name_1 = par_o;

    CHECK_OBJECT( tmp_start_name_1 );
    tmp_left_name_1 = par_o;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_4;
    tmp_stop_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_stop_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_1 = Py_None;
    tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_stop_name_1 );
    assert( tmp_subscript_name_1 != NULL );
    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_48b8636144cbfecb1a84480e5a66b8fb->m_frame.f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_48b8636144cbfecb1a84480e5a66b8fb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_48b8636144cbfecb1a84480e5a66b8fb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_48b8636144cbfecb1a84480e5a66b8fb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_48b8636144cbfecb1a84480e5a66b8fb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_48b8636144cbfecb1a84480e5a66b8fb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_48b8636144cbfecb1a84480e5a66b8fb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_48b8636144cbfecb1a84480e5a66b8fb,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame.
    if ( frame_48b8636144cbfecb1a84480e5a66b8fb == cache_frame_48b8636144cbfecb1a84480e5a66b8fb )
    {
        Py_DECREF( frame_48b8636144cbfecb1a84480e5a66b8fb );
    }
    cache_frame_48b8636144cbfecb1a84480e5a66b8fb = NULL;

    assertFrameObject( frame_48b8636144cbfecb1a84480e5a66b8fb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_8_si32le );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_c );
    par_c = NULL;

    Py_XDECREF( par_o );
    par_o = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_c );
    par_c = NULL;

    Py_XDECREF( par_o );
    par_o = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_8_si32le );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_PIL$_binary$$$function_9_i16be( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_o = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_start_name_1;
    PyObject *tmp_step_name_1;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_6a9742ee3ac3e0ad62342efa61478936 = NULL;

    struct Nuitka_FrameObject *frame_6a9742ee3ac3e0ad62342efa61478936;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6a9742ee3ac3e0ad62342efa61478936, codeobj_6a9742ee3ac3e0ad62342efa61478936, module_PIL$_binary, sizeof(void *)+sizeof(void *) );
    frame_6a9742ee3ac3e0ad62342efa61478936 = cache_frame_6a9742ee3ac3e0ad62342efa61478936;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6a9742ee3ac3e0ad62342efa61478936 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6a9742ee3ac3e0ad62342efa61478936 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_unpack );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unpack );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unpack" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_8e5335fb02f73f9b285b14387631d654;
    tmp_subscribed_name_2 = par_c;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_start_name_1 = par_o;

    CHECK_OBJECT( tmp_start_name_1 );
    tmp_left_name_1 = par_o;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_2;
    tmp_stop_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_stop_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_1 = Py_None;
    tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_stop_name_1 );
    assert( tmp_subscript_name_1 != NULL );
    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_6a9742ee3ac3e0ad62342efa61478936->m_frame.f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a9742ee3ac3e0ad62342efa61478936 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a9742ee3ac3e0ad62342efa61478936 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a9742ee3ac3e0ad62342efa61478936 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6a9742ee3ac3e0ad62342efa61478936, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6a9742ee3ac3e0ad62342efa61478936->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6a9742ee3ac3e0ad62342efa61478936, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6a9742ee3ac3e0ad62342efa61478936,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame.
    if ( frame_6a9742ee3ac3e0ad62342efa61478936 == cache_frame_6a9742ee3ac3e0ad62342efa61478936 )
    {
        Py_DECREF( frame_6a9742ee3ac3e0ad62342efa61478936 );
    }
    cache_frame_6a9742ee3ac3e0ad62342efa61478936 = NULL;

    assertFrameObject( frame_6a9742ee3ac3e0ad62342efa61478936 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_9_i16be );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_c );
    par_c = NULL;

    Py_XDECREF( par_o );
    par_o = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_c );
    par_c = NULL;

    Py_XDECREF( par_o );
    par_o = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_9_i16be );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_PIL$_binary$$$function_10_i32be( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_o = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_start_name_1;
    PyObject *tmp_step_name_1;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_6f18e23ef304baf94f798b0f7132b6fb = NULL;

    struct Nuitka_FrameObject *frame_6f18e23ef304baf94f798b0f7132b6fb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6f18e23ef304baf94f798b0f7132b6fb, codeobj_6f18e23ef304baf94f798b0f7132b6fb, module_PIL$_binary, sizeof(void *)+sizeof(void *) );
    frame_6f18e23ef304baf94f798b0f7132b6fb = cache_frame_6f18e23ef304baf94f798b0f7132b6fb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6f18e23ef304baf94f798b0f7132b6fb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6f18e23ef304baf94f798b0f7132b6fb ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_unpack );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unpack );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unpack" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_e32643bbdc087df0169bdbc4edb2d9da;
    tmp_subscribed_name_2 = par_c;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_start_name_1 = par_o;

    CHECK_OBJECT( tmp_start_name_1 );
    tmp_left_name_1 = par_o;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_4;
    tmp_stop_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_stop_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_1 = Py_None;
    tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_stop_name_1 );
    assert( tmp_subscript_name_1 != NULL );
    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_6f18e23ef304baf94f798b0f7132b6fb->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f18e23ef304baf94f798b0f7132b6fb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f18e23ef304baf94f798b0f7132b6fb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f18e23ef304baf94f798b0f7132b6fb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6f18e23ef304baf94f798b0f7132b6fb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6f18e23ef304baf94f798b0f7132b6fb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6f18e23ef304baf94f798b0f7132b6fb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6f18e23ef304baf94f798b0f7132b6fb,
        type_description_1,
        par_c,
        par_o
    );


    // Release cached frame.
    if ( frame_6f18e23ef304baf94f798b0f7132b6fb == cache_frame_6f18e23ef304baf94f798b0f7132b6fb )
    {
        Py_DECREF( frame_6f18e23ef304baf94f798b0f7132b6fb );
    }
    cache_frame_6f18e23ef304baf94f798b0f7132b6fb = NULL;

    assertFrameObject( frame_6f18e23ef304baf94f798b0f7132b6fb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_10_i32be );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_c );
    par_c = NULL;

    Py_XDECREF( par_o );
    par_o = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_c );
    par_c = NULL;

    Py_XDECREF( par_o );
    par_o = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_10_i32be );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_PIL$_binary$$$function_11_o16le( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_2db9ef03dd689815ac131daeec4ba533 = NULL;

    struct Nuitka_FrameObject *frame_2db9ef03dd689815ac131daeec4ba533;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2db9ef03dd689815ac131daeec4ba533, codeobj_2db9ef03dd689815ac131daeec4ba533, module_PIL$_binary, sizeof(void *) );
    frame_2db9ef03dd689815ac131daeec4ba533 = cache_frame_2db9ef03dd689815ac131daeec4ba533;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2db9ef03dd689815ac131daeec4ba533 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2db9ef03dd689815ac131daeec4ba533 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_pack );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pack );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pack" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0;
    tmp_args_element_name_2 = par_i;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_2db9ef03dd689815ac131daeec4ba533->m_frame.f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2db9ef03dd689815ac131daeec4ba533 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2db9ef03dd689815ac131daeec4ba533 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2db9ef03dd689815ac131daeec4ba533 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2db9ef03dd689815ac131daeec4ba533, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2db9ef03dd689815ac131daeec4ba533->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2db9ef03dd689815ac131daeec4ba533, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2db9ef03dd689815ac131daeec4ba533,
        type_description_1,
        par_i
    );


    // Release cached frame.
    if ( frame_2db9ef03dd689815ac131daeec4ba533 == cache_frame_2db9ef03dd689815ac131daeec4ba533 )
    {
        Py_DECREF( frame_2db9ef03dd689815ac131daeec4ba533 );
    }
    cache_frame_2db9ef03dd689815ac131daeec4ba533 = NULL;

    assertFrameObject( frame_2db9ef03dd689815ac131daeec4ba533 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_11_o16le );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_i );
    par_i = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_i );
    par_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_11_o16le );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_PIL$_binary$$$function_12_o32le( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_23d7c662a78f7577611825cebca01215 = NULL;

    struct Nuitka_FrameObject *frame_23d7c662a78f7577611825cebca01215;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_23d7c662a78f7577611825cebca01215, codeobj_23d7c662a78f7577611825cebca01215, module_PIL$_binary, sizeof(void *) );
    frame_23d7c662a78f7577611825cebca01215 = cache_frame_23d7c662a78f7577611825cebca01215;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_23d7c662a78f7577611825cebca01215 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_23d7c662a78f7577611825cebca01215 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_pack );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pack );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pack" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0;
    tmp_args_element_name_2 = par_i;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_23d7c662a78f7577611825cebca01215->m_frame.f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23d7c662a78f7577611825cebca01215 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_23d7c662a78f7577611825cebca01215 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23d7c662a78f7577611825cebca01215 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_23d7c662a78f7577611825cebca01215, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_23d7c662a78f7577611825cebca01215->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_23d7c662a78f7577611825cebca01215, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_23d7c662a78f7577611825cebca01215,
        type_description_1,
        par_i
    );


    // Release cached frame.
    if ( frame_23d7c662a78f7577611825cebca01215 == cache_frame_23d7c662a78f7577611825cebca01215 )
    {
        Py_DECREF( frame_23d7c662a78f7577611825cebca01215 );
    }
    cache_frame_23d7c662a78f7577611825cebca01215 = NULL;

    assertFrameObject( frame_23d7c662a78f7577611825cebca01215 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_12_o32le );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_i );
    par_i = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_i );
    par_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_12_o32le );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_PIL$_binary$$$function_13_o16be( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_76b0c9b8ac347caf50b3ee061a8f1c3c = NULL;

    struct Nuitka_FrameObject *frame_76b0c9b8ac347caf50b3ee061a8f1c3c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_76b0c9b8ac347caf50b3ee061a8f1c3c, codeobj_76b0c9b8ac347caf50b3ee061a8f1c3c, module_PIL$_binary, sizeof(void *) );
    frame_76b0c9b8ac347caf50b3ee061a8f1c3c = cache_frame_76b0c9b8ac347caf50b3ee061a8f1c3c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_76b0c9b8ac347caf50b3ee061a8f1c3c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_76b0c9b8ac347caf50b3ee061a8f1c3c ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_pack );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pack );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pack" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_8e5335fb02f73f9b285b14387631d654;
    tmp_args_element_name_2 = par_i;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_76b0c9b8ac347caf50b3ee061a8f1c3c->m_frame.f_lineno = 89;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76b0c9b8ac347caf50b3ee061a8f1c3c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_76b0c9b8ac347caf50b3ee061a8f1c3c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76b0c9b8ac347caf50b3ee061a8f1c3c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_76b0c9b8ac347caf50b3ee061a8f1c3c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_76b0c9b8ac347caf50b3ee061a8f1c3c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_76b0c9b8ac347caf50b3ee061a8f1c3c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_76b0c9b8ac347caf50b3ee061a8f1c3c,
        type_description_1,
        par_i
    );


    // Release cached frame.
    if ( frame_76b0c9b8ac347caf50b3ee061a8f1c3c == cache_frame_76b0c9b8ac347caf50b3ee061a8f1c3c )
    {
        Py_DECREF( frame_76b0c9b8ac347caf50b3ee061a8f1c3c );
    }
    cache_frame_76b0c9b8ac347caf50b3ee061a8f1c3c = NULL;

    assertFrameObject( frame_76b0c9b8ac347caf50b3ee061a8f1c3c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_13_o16be );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_i );
    par_i = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_i );
    par_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_13_o16be );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_PIL$_binary$$$function_14_o32be( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_1730e54b76ba2c1d2a316ffd800325be = NULL;

    struct Nuitka_FrameObject *frame_1730e54b76ba2c1d2a316ffd800325be;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1730e54b76ba2c1d2a316ffd800325be, codeobj_1730e54b76ba2c1d2a316ffd800325be, module_PIL$_binary, sizeof(void *) );
    frame_1730e54b76ba2c1d2a316ffd800325be = cache_frame_1730e54b76ba2c1d2a316ffd800325be;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1730e54b76ba2c1d2a316ffd800325be );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1730e54b76ba2c1d2a316ffd800325be ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_pack );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pack );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pack" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_e32643bbdc087df0169bdbc4edb2d9da;
    tmp_args_element_name_2 = par_i;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_1730e54b76ba2c1d2a316ffd800325be->m_frame.f_lineno = 93;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1730e54b76ba2c1d2a316ffd800325be );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1730e54b76ba2c1d2a316ffd800325be );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1730e54b76ba2c1d2a316ffd800325be );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1730e54b76ba2c1d2a316ffd800325be, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1730e54b76ba2c1d2a316ffd800325be->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1730e54b76ba2c1d2a316ffd800325be, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1730e54b76ba2c1d2a316ffd800325be,
        type_description_1,
        par_i
    );


    // Release cached frame.
    if ( frame_1730e54b76ba2c1d2a316ffd800325be == cache_frame_1730e54b76ba2c1d2a316ffd800325be )
    {
        Py_DECREF( frame_1730e54b76ba2c1d2a316ffd800325be );
    }
    cache_frame_1730e54b76ba2c1d2a316ffd800325be = NULL;

    assertFrameObject( frame_1730e54b76ba2c1d2a316ffd800325be );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_14_o32be );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_i );
    par_i = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_i );
    par_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$_binary$$$function_14_o32be );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_10_i32be( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_10_i32be,
        const_str_plain_i32be,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6f18e23ef304baf94f798b0f7132b6fb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$_binary,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_11_o16le(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_11_o16le,
        const_str_plain_o16le,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2db9ef03dd689815ac131daeec4ba533,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$_binary,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_12_o32le(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_12_o32le,
        const_str_plain_o32le,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_23d7c662a78f7577611825cebca01215,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$_binary,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_13_o16be(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_13_o16be,
        const_str_plain_o16be,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_76b0c9b8ac347caf50b3ee061a8f1c3c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$_binary,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_14_o32be(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_14_o32be,
        const_str_plain_o32be,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1730e54b76ba2c1d2a316ffd800325be,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$_binary,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_3_i8(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_3_i8,
        const_str_plain_i8,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6b034ea5ec86506061757c271114cfac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$_binary,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_4_o8(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_4_o8,
        const_str_plain_o8,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ce3810c8187cf734fea754330188a79e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$_binary,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_5_i16le( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_5_i16le,
        const_str_plain_i16le,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b7df4fd76164e8d14f80db368b2f0cfb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$_binary,
        const_str_digest_fa89ef8eb597fd699e5ba0a6f94b1683,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_6_si16le( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_6_si16le,
        const_str_plain_si16le,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bfef7036bf9ebf765212eb3d25db296a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$_binary,
        const_str_digest_b22ef13125ae928b4c157e2daef9f13a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_7_i32le( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_7_i32le,
        const_str_plain_i32le,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f037ad90ff54f5180f299f696acd8c8e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$_binary,
        const_str_digest_0d795948ac026c8895e54d5dd89cafe4,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_8_si32le( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_8_si32le,
        const_str_plain_si32le,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_48b8636144cbfecb1a84480e5a66b8fb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$_binary,
        const_str_digest_8c543a885745efa767b39eac92a01934,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function_9_i16be( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function_9_i16be,
        const_str_plain_i16be,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6a9742ee3ac3e0ad62342efa61478936,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$_binary,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_PIL$_binary =
{
    PyModuleDef_HEAD_INIT,
    "PIL._binary",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___loader__;
extern PyObject *metapath_based_loader;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___spec__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( PIL$_binary )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_PIL$_binary );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("PIL._binary: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("PIL._binary: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initPIL$_binary" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_PIL$_binary = Py_InitModule4(
        "PIL._binary",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_PIL$_binary = PyModule_Create( &mdef_PIL$_binary );
#endif

    moduledict_PIL$_binary = MODULE_DICT( module_PIL$_binary );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_PIL$_binary,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_PIL$_binary,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_PIL$_binary,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_PIL$_binary,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_PIL$_binary );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_1ff626b889dd5576e2ca2c530c9f3ff3, module_PIL$_binary );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_a371a59752b6fe6410141e49aa62d203;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_5f69f32ac0594625445ce8fe59f22737;
    UPDATE_STRING_DICT0( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_a371a59752b6fe6410141e49aa62d203 = MAKE_MODULE_FRAME( codeobj_a371a59752b6fe6410141e49aa62d203, module_PIL$_binary );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a371a59752b6fe6410141e49aa62d203 );
    assert( Py_REFCNT( frame_a371a59752b6fe6410141e49aa62d203 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_struct;
    tmp_globals_name_1 = (PyObject *)moduledict_PIL$_binary;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_unpack_str_plain_pack_tuple;
    tmp_level_name_1 = const_int_0;
    frame_a371a59752b6fe6410141e49aa62d203->m_frame.f_lineno = 14;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_unpack );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_unpack, tmp_assign_source_5 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_pack );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_pack, tmp_assign_source_6 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a371a59752b6fe6410141e49aa62d203 );
#endif
    popFrameStack();

    assertFrameObject( frame_a371a59752b6fe6410141e49aa62d203 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a371a59752b6fe6410141e49aa62d203 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a371a59752b6fe6410141e49aa62d203, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a371a59752b6fe6410141e49aa62d203->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a371a59752b6fe6410141e49aa62d203, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_assign_source_7 = MAKE_FUNCTION_PIL$_binary$$$function_3_i8(  );
    UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_i8, tmp_assign_source_7 );
    tmp_assign_source_8 = MAKE_FUNCTION_PIL$_binary$$$function_4_o8(  );
    UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_o8, tmp_assign_source_8 );
    tmp_defaults_1 = const_tuple_int_0_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_9 = MAKE_FUNCTION_PIL$_binary$$$function_5_i16le( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_i16le, tmp_assign_source_9 );
    tmp_defaults_2 = const_tuple_int_0_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_10 = MAKE_FUNCTION_PIL$_binary$$$function_6_si16le( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_si16le, tmp_assign_source_10 );
    tmp_defaults_3 = const_tuple_int_0_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_11 = MAKE_FUNCTION_PIL$_binary$$$function_7_i32le( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_i32le, tmp_assign_source_11 );
    tmp_defaults_4 = const_tuple_int_0_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_12 = MAKE_FUNCTION_PIL$_binary$$$function_8_si32le( tmp_defaults_4 );
    UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_si32le, tmp_assign_source_12 );
    tmp_defaults_5 = const_tuple_int_0_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_assign_source_13 = MAKE_FUNCTION_PIL$_binary$$$function_9_i16be( tmp_defaults_5 );
    UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_i16be, tmp_assign_source_13 );
    tmp_defaults_6 = const_tuple_int_0_tuple;
    Py_INCREF( tmp_defaults_6 );
    tmp_assign_source_14 = MAKE_FUNCTION_PIL$_binary$$$function_10_i32be( tmp_defaults_6 );
    UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_i32be, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_PIL$_binary$$$function_11_o16le(  );
    UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_o16le, tmp_assign_source_15 );
    tmp_assign_source_16 = MAKE_FUNCTION_PIL$_binary$$$function_12_o32le(  );
    UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_o32le, tmp_assign_source_16 );
    tmp_assign_source_17 = MAKE_FUNCTION_PIL$_binary$$$function_13_o16be(  );
    UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_o16be, tmp_assign_source_17 );
    tmp_assign_source_18 = MAKE_FUNCTION_PIL$_binary$$$function_14_o32be(  );
    UPDATE_STRING_DICT1( moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain_o32be, tmp_assign_source_18 );

    return MOD_RETURN_VALUE( module_PIL$_binary );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
