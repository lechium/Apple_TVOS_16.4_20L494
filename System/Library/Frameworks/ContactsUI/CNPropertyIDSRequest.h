//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNPropertyIDSRequest : NSObject
{
    NSArray *_propertyItems;	// 8 = 0x8
    NSString *_listenerID;	// 16 = 0x10
    NSString *_service;	// 24 = 0x18
    CDUnknownBlockType _requestResultBlock;	// 32 = 0x20
    CDUnknownBlockType _idQueryResultHandler;	// 40 = 0x28
}

+ (id)sharedWorkQueue;	// IMP=0x001000000005b4f9
- (void).cxx_destruct;	// IMP=0x000000000005c85e
@property(copy, nonatomic) CDUnknownBlockType idQueryResultHandler; // @synthesize idQueryResultHandler=_idQueryResultHandler;
@property(copy) CDUnknownBlockType requestResultBlock; // @synthesize requestResultBlock=_requestResultBlock;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *listenerID; // @synthesize listenerID=_listenerID;
@property(retain, nonatomic) NSArray *propertyItems; // @synthesize propertyItems=_propertyItems;
- (void)_requestStatusOnMainQueue:(_Bool)arg1;	// IMP=0x000000000005ba58
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;	// IMP=0x000000000005b993
@property(readonly, nonatomic) _Bool cancelled;
- (void)cancel;	// IMP=0x000000000005b8ab
- (void)cleanupDelegate;	// IMP=0x000000000005b806
- (id)initWithPropertyItems:(id)arg1 service:(id)arg2 postToMainQueue:(_Bool)arg3 resultBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000005b57c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
