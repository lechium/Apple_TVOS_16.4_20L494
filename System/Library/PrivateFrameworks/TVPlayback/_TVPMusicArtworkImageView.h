//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _TVPMusicArtworkImageView
{
    long long _placeholderAssetType;	// 8 = 0x8
    CDUnknownBlockType _placeholderImageBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008e5c8
@property(copy, nonatomic) CDUnknownBlockType placeholderImageBlock; // @synthesize placeholderImageBlock=_placeholderImageBlock;
@property(nonatomic) long long placeholderAssetType; // @synthesize placeholderAssetType=_placeholderAssetType;
- (void)_updatePlaceholderImageIfNeeded;	// IMP=0x000000000008e4a4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000008e3fc
- (void)didMoveToWindow;	// IMP=0x000000000008e38e
- (_Bool)canBecomeFocused;	// IMP=0x000000000008e35c

@end
