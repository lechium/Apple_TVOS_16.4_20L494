//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SHLLibraryItemMetadata;

@interface SHLLibraryGroup : NSObject
{
    SHLLibraryItemMetadata *_metadata;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSMutableArray *_tracksToSave;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000003f4fb
- (void).cxx_destruct;	// IMP=0x002000000003f80f
@property(retain, nonatomic) NSMutableArray *tracksToSave; // @synthesize tracksToSave=_tracksToSave;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) SHLLibraryItemMetadata *metadata; // @synthesize metadata=_metadata;
- (_Bool)validIdentifier:(id)arg1;	// IMP=0x001000000003f7c4
@property(readonly) unsigned long long hash;
- (_Bool)isEqualGroup:(id)arg1;	// IMP=0x001000000003f6ef
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003f688
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003f650
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003f618
- (id)initWithLibraryGroup:(id)arg1;	// IMP=0x001000000003f503
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000003f438
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000003f2ac
- (void)commonInitWithIdentifier:(id)arg1 metadata:(id)arg2 tracksToSave:(id)arg3;	// IMP=0x001000000003f162
- (id)_initWithIdentifier:(id)arg1 metadata:(id)arg2 tracksToSave:(id)arg3;	// IMP=0x001000000003f0b9
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2;	// IMP=0x001000000003f0a0
- (id)initWithIdentifier:(id)arg1;	// IMP=0x001000000003f085

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

