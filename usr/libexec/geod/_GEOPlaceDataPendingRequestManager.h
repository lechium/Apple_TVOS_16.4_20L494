//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _GEOPlaceDataPendingRequestManager : NSObject
{
    NSMutableDictionary *_requestHandlersPending;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000050f3f
- (void)_failAllPendingRequests;	// IMP=0x0010000000050c57
- (void)failedToResolveIdentifiers:(id)arg1 withError:(id)arg2;	// IMP=0x0010000000050987
- (void)didResolveItems:(id)arg1 forIdentifiers:(id)arg2;	// IMP=0x0010000000050439
- (void)_cleanUpFinishedHandlers:(id)arg1;	// IMP=0x001000000005020c
- (id)_finished:(id)arg1 withResult:(id)arg2 error:(id)arg3;	// IMP=0x001000000004ffe3
- (id)identifiersRequested:(id)arg1 forHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004fcec
- (void)willUpdateExpiredIdentifiers:(id)arg1;	// IMP=0x001000000004faaf
- (id)init;	// IMP=0x001000000004fa49

@end

