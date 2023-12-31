//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVCKDataItem.h"

@class NSDate, NSDictionary, NSNumber, TVCKBookmark, TVCKDataType;

__attribute__((visibility("hidden")))
@interface TVCKITunesStoreDataItem : TVCKDataItem
{
    unsigned long long _mochaResolutionIndex;	// 8 = 0x8
    unsigned long long _1080pResolutionIndex;	// 16 = 0x10
    unsigned long long _720pResolutionIndex;	// 24 = 0x18
    unsigned long long _480pResolutionIndex;	// 32 = 0x20
    TVCKBookmark *_bookmark;	// 40 = 0x28
    _Bool _allowedToUseHLSURL;	// 48 = 0x30
    NSDictionary *_storeDict;	// 56 = 0x38
    TVCKDataType *_mediaType;	// 64 = 0x40
    NSNumber *_storeItemID;	// 72 = 0x48
    NSDate *_expirationDate;	// 80 = 0x50
}

+ (id)storeKeyForATVDataProperty:(id)arg1;	// IMP=0x006000000009527a
+ (id)storeFlavorKeyForATVDataProperty:(id)arg1;	// IMP=0x00600000000950df
+ (_Bool)systemSupportsDolbyDigitalPlus;	// IMP=0x0060000000093512
- (void).cxx_destruct;	// IMP=0x00000000000957e7
@property(nonatomic) _Bool allowedToUseHLSURL; // @synthesize allowedToUseHLSURL=_allowedToUseHLSURL;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSNumber *storeItemID; // @synthesize storeItemID=_storeItemID;
@property(retain, nonatomic) TVCKDataType *mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSDictionary *storeDict; // @synthesize storeDict=_storeDict;
- (_Bool)_useHLSInsteadOfSpecificFlavor;	// IMP=0x0000000000094fdd
- (id)_dateFromString:(id)arg1;	// IMP=0x0000000000094f40
- (id)_flavoredDict;	// IMP=0x0000000000094e7e
- (unsigned long long)_bestResolutionIndex;	// IMP=0x0000000000094d38
- (id)concreteValueForProperty:(id)arg1;	// IMP=0x0000000000093f97
- (void)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x0000000000093ec4
- (void)updateBookmark:(id)arg1;	// IMP=0x0000000000093e43
@property(readonly, nonatomic) TVCKBookmark *bookmark;
- (void)_bookmarkServiceUpdatedNotification:(id)arg1;	// IMP=0x0000000000093d0b
- (unsigned long long)hash;	// IMP=0x0000000000093c47
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000093ac4
- (void)dealloc;	// IMP=0x0000000000093a4f
- (id)initWithDataClient:(id)arg1 storeDict:(id)arg2;	// IMP=0x000000000009355d

@end

