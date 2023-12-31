//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MKPriorityToIndexMap : NSObject
{
    NSMutableArray *_priorities;	// 8 = 0x8
    NSMutableDictionary *_prioritiesToIndexes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003fae7
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000003fad1
- (_Bool)contains:(id)arg1;	// IMP=0x000000000003fa9a
- (_Bool)containsPriority:(double)arg1;	// IMP=0x000000000003fa29
- (double)priorityOfIndex:(unsigned long long)arg1;	// IMP=0x000000000003f9ab
- (long long)indexOfPriority:(double)arg1;	// IMP=0x000000000003f91b
- (id)nextPriorityFromPriorities:(id)arg1 prioritiesToReAdd:(id)arg2;	// IMP=0x000000000003f831
- (void)appendRemainingPriorities:(id)arg1 prioritiesToReAdd:(id)arg2;	// IMP=0x000000000003f6ab
- (void)insertPriorities:(id)arg1 prioritiesToReAdd:(id)arg2;	// IMP=0x000000000003f45e
- (_Bool)addPriorities:(id)arg1;	// IMP=0x000000000003f1ab
- (id)initWithPriorities:(id)arg1;	// IMP=0x000000000003f10a
- (id)init;	// IMP=0x000000000003f0f6

@end

