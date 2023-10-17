//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEODataSessionTask, MISSING_TYPE, NSString;

@interface GEOWiFiQualityTileRequester : NSObject
{
    NSString *_tileKey;	// 8 = 0x8
    NSString *_eTag;	// 16 = 0x10
    id _auditToken;	// 24 = 0x18
    GEODataSessionTask *_task;	// 32 = 0x20
    CDUnknownBlockType _completion;	// 40 = 0x28
}

+ (CDStruct_026435ec)requestKind;	// IMP=0x002000000003598e
- (MISSING_TYPE *).cxx_destruct;	// IMP=0x0020000000036161
- (void)cancel;	// IMP=0x001000000003612f
- (void)dataSession:(id)arg1 didCompleteTask:(id)arg2;	// IMP=0x0010000000035eb0
- (void)startWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000035a50
- (id)initWithTileKey:(id)arg1 eTag:(id)arg2 auditToken:(id)arg3;	// IMP=0x0010000000035999

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

