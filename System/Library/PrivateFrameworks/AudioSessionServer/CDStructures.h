//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Named Structures

struct ChangedObject;

struct ConfigChangeSummary {
    CDUnknownFunctionPointerType *_vptr$Base;
    struct vector<std::unique_ptr<as::server::SessionUpdateSummary>, std::allocator<std::unique_ptr<as::server::SessionUpdateSummary>>> _sessionChanges;
    struct unique_ptr<as::server::ChangedObject, std::default_delete<as::server::ChangedObject>> _hardwareSystemChange;
};

struct ControlValue;

struct DeferredMessageState {
    _Bool mMessagePending;
    unsigned int mDeferredMessageCount;
    id proxy;
    struct ProcessToken mToken;
    struct vector<as::server::DeferredMessageState::EventType, std::allocator<as::server::DeferredMessageState::EventType>> mFIFO;
    struct optional<as::server::ConfigChangeSummary> mDeferredConfigChange;
    struct vector<as::RouteIdentifier, std::allocator<as::RouteIdentifier>> mDeferredDefaultRouteChanges;
    struct vector<unsigned int, std::allocator<unsigned int>> mDeferredStopForAppStateChange;
    struct vector<unsigned int, std::allocator<unsigned int>> mDeferredNeedsStateSync;
    struct vector<std::pair<unsigned int, NSDictionary *>, std::allocator<std::pair<unsigned int, NSDictionary *>>> mDeferredInterruptions;
    struct vector<std::pair<unsigned int, bool>, std::allocator<std::pair<unsigned int, bool>>> mDeferredHasProxies;
    struct vector<as::server::ControlValue, std::allocator<as::server::ControlValue>> mDeferredControlValueChanges;
};

struct ProcessToken {
    unsigned int mValue;
};

struct RouteIdentifier;

struct optional<as::server::ConfigChangeSummary> {
    union {
        char __null_state_;
        struct ConfigChangeSummary __val_;
    } ;
    _Bool __engaged_;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct synchronized<as::server::DeferredMessageState, caulk::mach::unfair_lock, caulk::empty_atomic_interface<as::server::DeferredMessageState>> {
    struct unfair_lock mMutex;
    struct DeferredMessageState mObject;
};

struct unfair_lock {
    struct os_unfair_lock_s m_lock;
};

struct unique_ptr<as::server::ChangedObject, std::default_delete<as::server::ChangedObject>> {
    struct __compressed_pair<as::server::ChangedObject *, std::default_delete<as::server::ChangedObject>> {
        struct ChangedObject *__value_;
    } __ptr_;
};

struct vector<as::RouteIdentifier, std::allocator<as::RouteIdentifier>> {
    struct RouteIdentifier *__begin_;
    struct RouteIdentifier *__end_;
    struct __compressed_pair<as::RouteIdentifier *, std::allocator<as::RouteIdentifier>> {
        struct RouteIdentifier *__value_;
    } __end_cap_;
};

struct vector<as::server::ControlValue, std::allocator<as::server::ControlValue>> {
    struct ControlValue *__begin_;
    struct ControlValue *__end_;
    struct __compressed_pair<as::server::ControlValue *, std::allocator<as::server::ControlValue>> {
        struct ControlValue *__value_;
    } __end_cap_;
};

struct vector<as::server::DeferredMessageState::EventType, std::allocator<as::server::DeferredMessageState::EventType>> {
    int *__begin_;
    int *__end_;
    struct __compressed_pair<as::server::DeferredMessageState::EventType *, std::allocator<as::server::DeferredMessageState::EventType>> {
        int *__value_;
    } __end_cap_;
};

struct vector<std::pair<unsigned int, NSDictionary *>, std::allocator<std::pair<unsigned int, NSDictionary *>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::pair<unsigned int, NSDictionary *>*, std::allocator<std::pair<unsigned int, NSDictionary *>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<std::pair<unsigned int, bool>, std::allocator<std::pair<unsigned int, bool>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::pair<unsigned int, bool>*, std::allocator<std::pair<unsigned int, bool>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<std::unique_ptr<as::server::SessionUpdateSummary>, std::allocator<std::unique_ptr<as::server::SessionUpdateSummary>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::unique_ptr<as::server::SessionUpdateSummary>*, std::allocator<std::unique_ptr<as::server::SessionUpdateSummary>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<unsigned int, std::allocator<unsigned int>> {
    unsigned int *__begin_;
    unsigned int *__end_;
    struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> {
        unsigned int *__value_;
    } __end_cap_;
};

