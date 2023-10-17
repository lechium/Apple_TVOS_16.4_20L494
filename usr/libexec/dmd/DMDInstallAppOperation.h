//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DMDAppMetadata;

@interface DMDInstallAppOperation
{
    DMDAppMetadata *_metadata;	// 8 = 0x8
}

+ (id)requiredEntitlements;	// IMP=0x0040000000050129
+ (id)whitelistedClassesForRequest;	// IMP=0x00100000000500f7
+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004ffad
- (void).cxx_destruct;	// IMP=0x0020000000050ac9
@property(retain, nonatomic) DMDAppMetadata *metadata; // @synthesize metadata=_metadata;
- (void)_resumeInstallationForRequest:(id)arg1;	// IMP=0x00100000000509a9
- (void)_runWithRequest:(id)arg1;	// IMP=0x001000000005073e
- (void)installAppForRequest:(id)arg1;	// IMP=0x001000000005054c
- (_Bool)appCoordinatorExistsForBundleIdentifier:(id)arg1 persona:(id)arg2;	// IMP=0x00100000000503e3
- (void)runWithRequest:(id)arg1;	// IMP=0x0010000000050136

@end

