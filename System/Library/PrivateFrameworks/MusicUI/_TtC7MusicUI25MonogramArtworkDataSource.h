//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7MusicUI25MonogramArtworkDataSource : NSObject
{
    MISSING_TYPE *$__lazy_storage_$_monogramRenderer;	// 8 = 0x8
    MISSING_TYPE *rendererToken;	// 16 = 0x10
    MISSING_TYPE *cache;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001c1230
- (id)init;	// IMP=0x00000000001c1150
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;	// IMP=0x00000000001c0c90
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x00000000001c0c60
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c0b90
- (id)existingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x00000000001c0b00
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;	// IMP=0x00000000001c0af0
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;	// IMP=0x00000000001c0ae0

@end

