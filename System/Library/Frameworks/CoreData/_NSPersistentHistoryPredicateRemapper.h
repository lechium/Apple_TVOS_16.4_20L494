//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSPersistentHistoryPredicateRemapper : NSObject
{
    NSString *_storeID;	// 8 = 0x8
    _Bool _previousKeyPathExpressionWasToken;	// 16 = 0x10
}

+ (id)defaultInstance;	// IMP=0x001000000006084a
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x00000000000611c0
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x0000000000060983
- (void)visitPredicate:(id)arg1;	// IMP=0x000000000006097d
- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;	// IMP=0x00000000000608f2
- (id)createPredicateForFetchFromPredicate:(id)arg1;	// IMP=0x00000000000608de
- (void)dealloc;	// IMP=0x00000000000608a3
- (id)initWithStoreIdentifier:(id)arg1;	// IMP=0x000000000006086f

@end

