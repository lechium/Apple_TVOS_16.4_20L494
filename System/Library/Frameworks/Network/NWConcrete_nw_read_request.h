//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NWConcrete_nw_connection;
@protocol OS_dispatch_data, OS_nw_array, OS_nw_content_context, OS_nw_error;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_read_request : NSObject
{
    NWConcrete_nw_read_request *next;	// 8 = 0x8
    NWConcrete_nw_read_request *tail;	// 16 = 0x10
    CDUnknownBlockType data_completion;	// 24 = 0x18
    CDUnknownBlockType data_multiple_completion;	// 32 = 0x20
    CDUnknownBlockType buffer_completion;	// 40 = 0x28
    NWConcrete_nw_connection *connection;	// 48 = 0x30
    unsigned int qos_class;	// 56 = 0x38
    int variant;	// 60 = 0x3c
    unsigned long long min;	// 64 = 0x40
    unsigned long long max;	// 72 = 0x48
    unsigned long long progress;	// 80 = 0x50
    char *buffer;	// 88 = 0x58
    NSObject<OS_dispatch_data> *data;	// 96 = 0x60
    NSObject<OS_nw_content_context> *context;	// 104 = 0x68
    NSObject<OS_nw_content_context> *repliable_message;	// 112 = 0x70
    NSObject<OS_nw_error> *error;	// 120 = 0x78
    NSObject<OS_nw_array> *read_array;	// 128 = 0x80
    NSObject<OS_nw_array> *context_array;	// 136 = 0x88
    unsigned int reported:1;	// 144 = 0x90
    unsigned int is_complete:1;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000506ff0
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000506f50
- (id)init;	// IMP=0x0000000000506cd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
