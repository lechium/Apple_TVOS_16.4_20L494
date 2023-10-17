//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface TVHKRentalItem : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSNumber *_rentalKeyID;	// 16 = 0x10
    NSNumber *_userID;	// 24 = 0x18
    NSNumber *_DAAPPersistentItemID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000029585
@property(copy, nonatomic) NSNumber *DAAPPersistentItemID; // @synthesize DAAPPersistentItemID=_DAAPPersistentItemID;
@property(copy, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSNumber *rentalKeyID; // @synthesize rentalKeyID=_rentalKeyID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029486
- (id)description;	// IMP=0x0000000000029318
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000028fe9
- (unsigned long long)hash;	// IMP=0x0000000000028ea6

@end

