//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNMultiValueDiff : NSObject
{
    NSArray *_updates;	// 8 = 0x8
}

+ (id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2;	// IMP=0x0060000000005e79
+ (id)emptyDiff;	// IMP=0x0060000000005dd3
- (void).cxx_destruct;	// IMP=0x0000000000006177
@property(readonly, copy, nonatomic) NSArray *updates; // @synthesize updates=_updates;
- (id)description;	// IMP=0x000000000000613d
- (_Bool)isEmpty;	// IMP=0x0000000000006120
- (id)multiValueByApplyToMultiValue:(id)arg1 withIdentifierMap:(id)arg2;	// IMP=0x0000000000005f8d
- (id)initWithUpdates:(id)arg1;	// IMP=0x0000000000005f03
- (_Bool)applyToABPerson:(void *)arg1 propertyDescription:(id)arg2 isUnified:(_Bool)arg3 logger:(id)arg4 error:(id *)arg5;	// IMP=0x000000000008535c

@end

