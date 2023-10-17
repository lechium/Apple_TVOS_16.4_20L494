//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNUIPeopleGroup : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_sourceKind;	// 24 = 0x18
}

+ (id)peopleGroupWithName:(id)arg1 identifier:(id)arg2 sourceKind:(id)arg3;	// IMP=0x00600000000adb94
- (void).cxx_destruct;	// IMP=0x00000000000add7f
@property(copy, nonatomic) NSString *sourceKind; // @synthesize sourceKind=_sourceKind;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x00000000000adc48

@end

