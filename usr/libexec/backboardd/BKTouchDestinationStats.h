//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet, NSString;

@interface BKTouchDestinationStats : NSObject
{
    NSMutableIndexSet *_pathIndexes;	// 8 = 0x8
    NSMutableIndexSet *_touchIdentifiers;	// 16 = 0x10
    NSString *_processDescription;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000006bf5d
@property(retain, nonatomic) NSString *processDescription; // @synthesize processDescription=_processDescription;
@property(retain, nonatomic) NSMutableIndexSet *touchIdentifiers; // @synthesize touchIdentifiers=_touchIdentifiers;
@property(retain, nonatomic) NSMutableIndexSet *pathIndexes; // @synthesize pathIndexes=_pathIndexes;
- (id)init;	// IMP=0x001000000006be97

@end

