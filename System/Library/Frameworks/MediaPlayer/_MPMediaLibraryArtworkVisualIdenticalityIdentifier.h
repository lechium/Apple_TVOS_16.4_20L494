//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPMediaLibraryArtworkVisualIdenticalityIdentifier : NSObject
{
    long long _artworkType;	// 8 = 0x8
    NSString *_availableArtworkToken;	// 16 = 0x10
    NSString *_fetchableArtworkToken;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000028f17a
@property(readonly, nonatomic) NSString *fetchableArtworkToken; // @synthesize fetchableArtworkToken=_fetchableArtworkToken;
@property(readonly, nonatomic) NSString *availableArtworkToken; // @synthesize availableArtworkToken=_availableArtworkToken;
@property(readonly, nonatomic) long long artworkType; // @synthesize artworkType=_artworkType;
- (id)colorToHex:(id)arg1;	// IMP=0x000000000028f0be
- (id)stringRepresentation;	// IMP=0x000000000028f02e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000028f023
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000028ef43
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithArtworkType:(long long)arg1 availableArtworkToken:(id)arg2 fetchableArtworkToken:(id)arg3;	// IMP=0x000000000028ed54
- (id)init;	// IMP=0x000000000028ed3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

