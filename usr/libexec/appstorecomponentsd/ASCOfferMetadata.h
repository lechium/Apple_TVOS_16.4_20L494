//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ASCOfferMetadata : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000016398
+ (id)progressMetadataWithValue:(double)arg1;	// IMP=0x001000000001635d
+ (id)indeterminateProgressMetadata;	// IMP=0x0010000000016334
+ (id)redownloadMetadata;	// IMP=0x0010000000016314
+ (id)placeholderMetadata;	// IMP=0x00100000000162fb
+ (id)iconMetadataWithImageName:(id)arg1 animationName:(id)arg2;	// IMP=0x001000000001628b
+ (id)textMetadataWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x001000000001621b
+ (id)emptyMetadata;	// IMP=0x0010000000016202
@property(readonly, nonatomic, getter=isViewInAppStore) _Bool viewInAppStore;
@property(readonly, nonatomic, getter=isPlaceholder) _Bool placeholder;
@property(readonly, nonatomic, getter=isProgress) _Bool progress;
@property(readonly, nonatomic, getter=isIcon) _Bool icon;
@property(readonly, nonatomic, getter=isText) _Bool text;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000163e3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000163dd
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000163a0
- (id)init;	// IMP=0x00100000000161d7
- (id)_init;	// IMP=0x00100000000161a8

@end

