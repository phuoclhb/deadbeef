/* apbuild embedded metadata */
#define APBUILD_NOTE_METADATA(s)   __asm__(".section .metadata, \"MS\", @note, 1\n\t.string \"" s "\"\n\t.previous\n\t")

#ifdef APBUILD_VERSION
APBUILD_NOTE_METADATA("apbuild.version=" APBUILD_VERSION);
#endif

/* apbuild generated symbol exclusion list */
__asm__(".symver clnt_pcreateerror,clnt_pcreateerror@GLIBC_2.2.5");
__asm__(".symver clnt_spcreateerror,clnt_spcreateerror@GLIBC_2.2.5");
__asm__(".symver feupdateenv,feupdateenv@GLIBC_2.2.5");
__asm__(".symver lio_listio,lio_listio@GLIBC_2.2.5");
__asm__(".symver lio_listio64,lio_listio64@GLIBC_2.2.5");
__asm__(".symver mkostemps,mkostemps@GLIBC_2.11");
__asm__(".symver mkostemps64,mkostemps64@GLIBC_2.11");
__asm__(".symver nftw,nftw@GLIBC_2.2.5");
__asm__(".symver nftw64,nftw64@GLIBC_2.2.5");
__asm__(".symver pthread_cond_broadcast,pthread_cond_broadcast@GLIBC_2.2.5");
__asm__(".symver pthread_cond_destroy,pthread_cond_destroy@GLIBC_2.2.5");
__asm__(".symver pthread_cond_init,pthread_cond_init@GLIBC_2.2.5");
__asm__(".symver pthread_cond_signal,pthread_cond_signal@GLIBC_2.2.5");
__asm__(".symver pthread_cond_timedwait,pthread_cond_timedwait@GLIBC_2.2.5");
__asm__(".symver pthread_cond_wait,pthread_cond_wait@GLIBC_2.2.5");
__asm__(".symver regexec,regexec@GLIBC_2.2.5");
__asm__(".symver rpc_createerr,rpc_createerr@GLIBC_2.2.5");
__asm__(".symver __rpc_thread_createerr,__rpc_thread_createerr@GLIBC_2.2.5");
__asm__(".symver __strtoll_l,__strtoll_l@GLIBC_2.2.5");
__asm__(".symver __strtoull_l,__strtoull_l@GLIBC_2.2.5");
/*__asm__(".symver _sys_errlist,_sys_errlist@GLIBC_2.3");
__asm__(".symver sys_errlist,sys_errlist@GLIBC_2.3");*/
__asm__(".symver _sys_errlist,_sys_errlist@GLIBC_2.2.5");
__asm__(".symver sys_errlist,sys_errlist@GLIBC_2.2.5");
/*__asm__(".symver _sys_nerr,_sys_nerr@GLIBC_2.3");
__asm__(".symver sys_nerr,sys_nerr@GLIBC_2.3");*/
__asm__(".symver _sys_nerr,_sys_nerr@GLIBC_2.2.5");
__asm__(".symver sys_nerr,sys_nerr@GLIBC_2.2.5");
__asm__(".symver sys_sigabbrev,sys_sigabbrev@GLIBC_2.2.5");
__asm__(".symver _sys_siglist,_sys_siglist@GLIBC_2.2.5");
__asm__(".symver sys_siglist,sys_siglist@GLIBC_2.2.5");
__asm__(".symver timer_create,timer_create@GLIBC_2.2.5");
__asm__(".symver timer_delete,timer_delete@GLIBC_2.2.5");
__asm__(".symver timer_getoverrun,timer_getoverrun@GLIBC_2.2.5");
__asm__(".symver timer_gettime,timer_gettime@GLIBC_2.2.5");
__asm__(".symver timer_settime,timer_settime@GLIBC_2.2.5");
__asm__(".symver __gethostname_chk,__gethostname_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver epoll_create,epoll_create@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __getdomainname_chk,__getdomainname_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __vswprintf_chk,__vswprintf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __stpcpy_chk,__stpcpy_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver timerfd_gettime,timerfd_gettime@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inotify_init1,inotify_init1@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __wcstombs_chk,__wcstombs_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __printf_chk,__printf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __fgetws_chk,__fgetws_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __register_atfork,__register_atfork@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver gnu_dev_major,gnu_dev_major@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __vfwprintf_chk,__vfwprintf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __wcpcpy_chk,__wcpcpy_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver open_wmemstream,open_wmemstream@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inet6_opt_append,inet6_opt_append@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver timerfd_create,timerfd_create@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __swprintf_chk,__swprintf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver getipv4sourcefilter,getipv4sourcefilter@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __vwprintf_chk,__vwprintf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver readlinkat,readlinkat@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __wctomb_chk,__wctomb_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __readlink_chk,__readlink_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver setipv4sourcefilter,setipv4sourcefilter@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __isoc99_sscanf,__isoc99_sscanf@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __getlogin_r_chk,__getlogin_r_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver sync_file_range,sync_file_range@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __open64_2,__open64_2@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inet6_rth_init,inet6_rth_init@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inet6_opt_next,inet6_opt_next@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __fxstatat64,__fxstatat64@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver unlinkat,unlinkat@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __fwprintf_chk,__fwprintf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __mempcpy_chk,__mempcpy_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver epoll_wait,epoll_wait@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver mkfifoat,mkfifoat@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __isoc99_scanf,__isoc99_scanf@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __read_chk,__read_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __fgetws_unlocked_chk,__fgetws_unlocked_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __vsprintf_chk,__vsprintf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __wcsncpy_chk,__wcsncpy_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __stack_chk_fail,__stack_chk_fail@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inotify_rm_watch,inotify_rm_watch@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver xdr_quad_t,xdr_quad_t@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __sched_cpualloc,__sched_cpualloc@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __obstack_vprintf_chk,__obstack_vprintf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __isoc99_swscanf,__isoc99_swscanf@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __isoc99_vfwscanf,__isoc99_vfwscanf@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __sched_cpufree,__sched_cpufree@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inet6_opt_finish,inet6_opt_finish@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __confstr_chk,__confstr_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __wcsncat_chk,__wcsncat_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver setsourcefilter,setsourcefilter@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver xdr_u_quad_t,xdr_u_quad_t@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __fread_unlocked_chk,__fread_unlocked_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver eaccess,eaccess@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inet6_option_alloc,inet6_option_alloc@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __openat64_2,__openat64_2@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver sched_setaffinity,sched_setaffinity@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inet6_option_append,inet6_option_append@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver futimens,futimens@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver renameat,renameat@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __wmemset_chk,__wmemset_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inet6_opt_get_val,inet6_opt_get_val@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver unshare,unshare@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __isoc99_vsscanf,__isoc99_vsscanf@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver signalfd,signalfd@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inet6_option_next,inet6_option_next@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inet6_rth_add,inet6_rth_add@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver semtimedop,semtimedop@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver utimensat,utimensat@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inet6_rth_segments,inet6_rth_segments@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __pread_chk,__pread_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __syslog_chk,__syslog_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver eventfd,eventfd@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __fgets_unlocked_chk,__fgets_unlocked_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __getcwd_chk,__getcwd_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver fchmodat,fchmodat@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver dup3,dup3@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __vprintf_chk,__vprintf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __fprintf_chk,__fprintf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __wmemcpy_chk,__wmemcpy_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __isoc99_wscanf,__isoc99_wscanf@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __wcscpy_chk,__wcscpy_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __isoc99_fscanf,__isoc99_fscanf@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __mbstowcs_chk,__mbstowcs_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __dprintf_chk,__dprintf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __wmempcpy_chk,__wmempcpy_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver symlinkat,symlinkat@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __memmove_chk,__memmove_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __getwd_chk,__getwd_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __vsnprintf_chk,__vsnprintf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver mkostemp64,mkostemp64@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver eventfd_read,eventfd_read@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver remap_file_pages,remap_file_pages@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __isoc99_vswscanf,__isoc99_vswscanf@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver fdopendir,fdopendir@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __openat_2,__openat_2@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __fgets_chk,__fgets_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __strncpy_chk,__strncpy_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __sched_cpucount,__sched_cpucount@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __mbsrtowcs_chk,__mbsrtowcs_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __wcscat_chk,__wcscat_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inet6_option_space,inet6_option_space@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver sched_getaffinity,sched_getaffinity@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __open_2,__open_2@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver fchownat,fchownat@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver timerfd_settime,timerfd_settime@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver sched_getcpu,sched_getcpu@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __getgroups_chk,__getgroups_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inet6_opt_init,inet6_opt_init@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __snprintf_chk,__snprintf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver mkdirat,mkdirat@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __memset_chk,__memset_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __strncat_chk,__strncat_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inet6_rth_space,inet6_rth_space@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __recv_chk,__recv_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inet6_rth_reverse,inet6_rth_reverse@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __realpath_chk,__realpath_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver qsort_r,qsort_r@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __obstack_printf_chk,__obstack_printf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inet6_rth_getaddr,inet6_rth_getaddr@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver splice,splice@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver eventfd_write,eventfd_write@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver vmsplice,vmsplice@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver getsourcefilter,getsourcefilter@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __isoc99_vwscanf,__isoc99_vwscanf@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver epoll_ctl,epoll_ctl@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver gnu_dev_minor,gnu_dev_minor@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __memcpy_chk,__memcpy_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __isoc99_vfscanf,__isoc99_vfscanf@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __stpncpy_chk,__stpncpy_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inet6_opt_find,inet6_opt_find@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __mbsnrtowcs_chk,__mbsnrtowcs_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver strerror_l,strerror_l@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __fread_chk,__fread_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __wcsnrtombs_chk,__wcsnrtombs_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __wprintf_chk,__wprintf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver epoll_create1,epoll_create1@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __vfprintf_chk,__vfprintf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __vsyslog_chk,__vsyslog_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inotify_add_watch,inotify_add_watch@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __wcrtomb_chk,__wcrtomb_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver epoll_pwait,epoll_pwait@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __strcpy_chk,__strcpy_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __vdprintf_chk,__vdprintf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __vasprintf_chk,__vasprintf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __xpg_strerror_r,__xpg_strerror_r@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __wcpncpy_chk,__wcpncpy_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inet6_option_init,inet6_option_init@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __wmemmove_chk,__wmemmove_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __sprintf_chk,__sprintf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver futimesat,futimesat@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __pread64_chk,__pread64_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver strptime_l,strptime_l@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver lchmod,lchmod@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __chk_fail,__chk_fail@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __isoc99_vscanf,__isoc99_vscanf@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __wcsrtombs_chk,__wcsrtombs_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pipe2,pipe2@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __strcat_chk,__strcat_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver faccessat,faccessat@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __asprintf_chk,__asprintf_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ppoll,ppoll@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __recvfrom_chk,__recvfrom_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inet6_opt_set_val,inet6_opt_set_val@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __ptsname_r_chk,__ptsname_r_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __isoc99_fwscanf,__isoc99_fwscanf@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __gets_chk,__gets_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver gnu_dev_makedev,gnu_dev_makedev@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __xmknodat,__xmknodat@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver inet6_option_find,inet6_option_find@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __ttyname_r_chk,__ttyname_r_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __readlinkat_chk,__readlinkat_chk@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver dlinfo,dlinfo@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver dladdr1,dladdr1@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver dlmopen,dlmopen@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pthread_mutexattr_getprotocol,pthread_mutexattr_getprotocol@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pthread_mutex_setprioceiling,pthread_mutex_setprioceiling@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pthread_mutexattr_setprioceiling,pthread_mutexattr_setprioceiling@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __pthread_unregister_cancel_restore,__pthread_unregister_cancel_restore@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pthread_attr_setaffinity_np,pthread_attr_setaffinity_np@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __pthread_cleanup_routine,__pthread_cleanup_routine@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pthread_condattr_getclock,pthread_condattr_getclock@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __pthread_register_cancel_defer,__pthread_register_cancel_defer@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __pthread_unwind_next,__pthread_unwind_next@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pthread_timedjoin_np,pthread_timedjoin_np@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pthread_setaffinity_np,pthread_setaffinity_np@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pthread_mutex_getprioceiling,pthread_mutex_getprioceiling@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pthread_mutexattr_getprioceiling,pthread_mutexattr_getprioceiling@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pthread_attr_getaffinity_np,pthread_attr_getaffinity_np@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pthread_barrierattr_getpshared,pthread_barrierattr_getpshared@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pthread_condattr_setclock,pthread_condattr_setclock@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pthread_tryjoin_np,pthread_tryjoin_np@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pthread_setschedprio,pthread_setschedprio@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pthread_getaffinity_np,pthread_getaffinity_np@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pthread_mutexattr_setrobust_np,pthread_mutexattr_setrobust_np@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pthread_mutexattr_getrobust_np,pthread_mutexattr_getrobust_np@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pthread_mutexattr_setprotocol,pthread_mutexattr_setprotocol@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver pthread_mutex_consistent_np,pthread_mutex_consistent_np@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_put16,ns_put16@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_initparse,ns_initparse@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __p_rcode,__p_rcode@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_msg_getflag,ns_msg_getflag@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_name_pack,ns_name_pack@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_skiprr,ns_skiprr@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_get32,ns_get32@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_makecanon,ns_makecanon@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_parse_ttl,ns_parse_ttl@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_datetosecs,ns_datetosecs@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_put32,ns_put32@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_format_ttl,ns_format_ttl@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_name_rollback,ns_name_rollback@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_subdomain,ns_subdomain@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_samedomain,ns_samedomain@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_name_pton,ns_name_pton@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_parserr,ns_parserr@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_name_uncompress,ns_name_uncompress@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_name_unpack,ns_name_unpack@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_name_skip,ns_name_skip@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_sprintrrf,ns_sprintrrf@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_name_compress,ns_name_compress@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_name_ntol,ns_name_ntol@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_name_ntop,ns_name_ntop@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_samename,ns_samename@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver ns_get16,ns_get16@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver mq_timedreceive,mq_timedreceive@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver mq_timedsend,mq_timedsend@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver mq_setattr,mq_setattr@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver mq_send,mq_send@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver mq_unlink,mq_unlink@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver __mq_open_2,__mq_open_2@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver mq_notify,mq_notify@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver mq_receive,mq_receive@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver mq_close,mq_close@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver mq_getattr,mq_getattr@GLIBC_DONT_USE_THIS_SYMBOL");
__asm__(".symver td_thr_tlsbase,td_thr_tlsbase@GLIBC_DONT_USE_THIS_SYMBOL");
