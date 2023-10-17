//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPModelRequest.h>

@class ICStoreRequestContext, MPCModelGenericAVItemTimedMetadataResponse, MPModelGenericObject, NSArray;

__attribute__((visibility("hidden")))
@interface MPCModelGenericAVItemTimedMetadataRequest : MPModelRequest
{
    MPCModelGenericAVItemTimedMetadataResponse *_previousResponse;	// 8 = 0x8
    MPModelGenericObject *_genericObject;	// 16 = 0x10
    ICStoreRequestContext *_storeRequestContext;	// 24 = 0x18
    NSArray *_timedMetadataGroups;	// 32 = 0x20
}

+ (id)metadataIdentifiers;	// IMP=0x0040000000349b45
+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000349b3d
- (void).cxx_destruct;	// IMP=0x0000000000347b4e
@property(readonly, copy, nonatomic) NSArray *timedMetadataGroups; // @synthesize timedMetadataGroups=_timedMetadataGroups;
@property(readonly, copy, nonatomic) ICStoreRequestContext *storeRequestContext; // @synthesize storeRequestContext=_storeRequestContext;
@property(readonly, nonatomic) MPModelGenericObject *genericObject; // @synthesize genericObject=_genericObject;
@property(retain, nonatomic) MPCModelGenericAVItemTimedMetadataResponse *previousResponse; // @synthesize previousResponse=_previousResponse;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000347a0d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000034797e
- (id)initWithGenericObject:(id)arg1 timedMetadataGroups:(id)arg2 storeRequestContext:(id)arg3;	// IMP=0x000000000034788c

@end
