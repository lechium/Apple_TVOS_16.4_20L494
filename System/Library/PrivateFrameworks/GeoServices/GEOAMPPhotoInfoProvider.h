//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMediaArtwork, GEOPDPhotoContent, NSString;

__attribute__((visibility("hidden")))
@interface GEOAMPPhotoInfoProvider : NSObject
{
    AMSMediaArtwork *_artwork;	// 8 = 0x8
    GEOPDPhotoContent *_templatePhotoContent;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000134778f
- (int)designatedURLType;	// IMP=0x0000000001347784
- (id)bestPhotoForSize:(struct CGSize)arg1 options:(id)arg2;	// IMP=0x0000000001347190
- (id)largestPhoto;	// IMP=0x00000000013470d1
- (double)sizeRatio;	// IMP=0x0000000001347093
- (id)initWithPhotoContent:(id)arg1;	// IMP=0x0000000001346d28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

