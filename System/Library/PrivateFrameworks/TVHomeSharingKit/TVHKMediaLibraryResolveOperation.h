//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class NSError, NSNetService, NSString, TVHKBonjourServiceConfiguration, TVHKMediaLibraryHostConfiguration;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryResolveOperation : TVHKAsynchronousOperation
{
    NSString *_title;	// 8 = 0x8
    TVHKMediaLibraryHostConfiguration *_hostConfiguration;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    TVHKBonjourServiceConfiguration *_bonjourServiceConfiguration;	// 32 = 0x20
    NSNetService *_service;	// 40 = 0x28
}

+ (id)new;	// IMP=0x001000000008f7ab
- (void).cxx_destruct;	// IMP=0x00000000000904b7
@property(retain, nonatomic) NSNetService *service; // @synthesize service=_service;
@property(copy, nonatomic) TVHKBonjourServiceConfiguration *bonjourServiceConfiguration; // @synthesize bonjourServiceConfiguration=_bonjourServiceConfiguration;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) TVHKMediaLibraryHostConfiguration *hostConfiguration; // @synthesize hostConfiguration=_hostConfiguration;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)netServiceDidStop:(id)arg1;	// IMP=0x00000000000902db
- (void)netService:(id)arg1 didNotResolve:(id)arg2;	// IMP=0x0000000000090122
- (void)netServiceDidResolveAddress:(id)arg1;	// IMP=0x000000000008fcbd
- (void)cancel;	// IMP=0x000000000008fc67
- (void)_finishOperationWithError:(id)arg1;	// IMP=0x000000000008fbfc
- (void)executionDidBegin;	// IMP=0x000000000008f961
- (void)_stopResolving;	// IMP=0x000000000008f8fa
- (id)initWithBonjourServiceConfiguration:(id)arg1;	// IMP=0x000000000008f849
- (id)init;	// IMP=0x000000000008f7da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

