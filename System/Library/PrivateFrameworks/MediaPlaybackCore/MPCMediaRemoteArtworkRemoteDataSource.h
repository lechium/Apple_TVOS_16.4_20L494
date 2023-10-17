//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCMediaRemoteController, NSString;

__attribute__((visibility("hidden")))
@interface MPCMediaRemoteArtworkRemoteDataSource : NSObject
{
    MPCMediaRemoteController *_controller;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003477b0
@property(readonly, nonatomic) __weak MPCMediaRemoteController *controller; // @synthesize controller=_controller;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003475e6
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;	// IMP=0x00000000003475d1
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x00000000003475cb
- (id)existingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x00000000003473dd
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;	// IMP=0x00000000003473d1
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;	// IMP=0x00000000003473c9
- (id)initWithController:(id)arg1;	// IMP=0x0000000000347365

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

