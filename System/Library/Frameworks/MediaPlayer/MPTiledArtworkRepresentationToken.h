//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface MPTiledArtworkRepresentationToken : NSObject
{
    id <NSCopying> _revisionIdentifier;	// 8 = 0x8
    NSArray *_tileArtworkVisualIdenticalityIdentifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000216bf6
@property(copy, nonatomic) NSArray *tileArtworkVisualIdenticalityIdentifiers; // @synthesize tileArtworkVisualIdenticalityIdentifiers=_tileArtworkVisualIdenticalityIdentifiers;
@property(copy, nonatomic) id <NSCopying> revisionIdentifier; // @synthesize revisionIdentifier=_revisionIdentifier;

@end

