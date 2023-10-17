//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TVHKDMAPEntityKind, TVHKMediaEntityPropertyDescriptorCollection;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntityKind : NSObject
{
    NSString *_entityClassName;	// 8 = 0x8
    TVHKDMAPEntityKind *_DAMPEntityKind;	// 16 = 0x10
    NSString *_DMAPShuffleSortArgumentValue;	// 24 = 0x18
    NSDictionary *_ascendingDMAPSortArgumentValues;	// 32 = 0x20
    NSDictionary *_descendingDMAPSortArgumentValues;	// 40 = 0x28
    TVHKMediaEntityPropertyDescriptorCollection *_propertyDescriptorCollecton;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000967f5
@property(retain, nonatomic) TVHKMediaEntityPropertyDescriptorCollection *propertyDescriptorCollecton; // @synthesize propertyDescriptorCollecton=_propertyDescriptorCollecton;
@property(copy, nonatomic) NSDictionary *descendingDMAPSortArgumentValues; // @synthesize descendingDMAPSortArgumentValues=_descendingDMAPSortArgumentValues;
@property(copy, nonatomic) NSDictionary *ascendingDMAPSortArgumentValues; // @synthesize ascendingDMAPSortArgumentValues=_ascendingDMAPSortArgumentValues;
@property(copy, nonatomic) NSString *DMAPShuffleSortArgumentValue; // @synthesize DMAPShuffleSortArgumentValue=_DMAPShuffleSortArgumentValue;
@property(retain, nonatomic) TVHKDMAPEntityKind *DAMPEntityKind; // @synthesize DAMPEntityKind=_DAMPEntityKind;
@property(copy, nonatomic) NSString *entityClassName; // @synthesize entityClassName=_entityClassName;
- (id)description;	// IMP=0x000000000009657f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000964c2
- (id)sortingPropertyDescriptorForName:(id)arg1;	// IMP=0x000000000009643f
- (id)propertyDescriptorForName:(id)arg1;	// IMP=0x00000000000963bc
@property(readonly, copy, nonatomic) NSDictionary *propertyDescriptorByName;
- (id)init;	// IMP=0x00000000000962c5

@end

