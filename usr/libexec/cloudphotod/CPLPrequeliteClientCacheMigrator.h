//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLEngineStore, CPLPlatformObject, CPLPrequeliteStore, NSString;

@interface CPLPrequeliteClientCacheMigrator : NSObject
{
    CPLPlatformObject *_platformObject;	// 8 = 0x8
    CPLPrequeliteStore *_store;	// 16 = 0x10
}

+ (id)platformImplementationProtocol;	// IMP=0x00200000000682ca
- (void).cxx_destruct;	// IMP=0x00200000000683d9
@property(readonly, nonatomic) __weak CPLPrequeliteStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (id)redactedDescription;	// IMP=0x00100000000683a7
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) CPLEngineStore *engineStore;
- (id)initWithStore:(id)arg1;	// IMP=0x00100000000681f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

