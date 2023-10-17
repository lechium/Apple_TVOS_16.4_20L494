//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class NSObject;

__attribute__((visibility("hidden")))
@interface NSKeyValueChangeDictionary : NSDictionary
{
    CDStruct_e173081d _details;	// 8 = 0x8
    NSObject *_originalObservable;	// 48 = 0x30
    _Bool _isPriorNotification;	// 56 = 0x38
    _Bool _isRetainingObjects;	// 57 = 0x39
}

- (id)keyEnumerator;	// IMP=0x0000000000556f1f
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000556d70
- (unsigned long long)count;	// IMP=0x0000000000556d22
- (void)dealloc;	// IMP=0x0000000000556c7b
- (void)retainObjects;	// IMP=0x0000000000556c1d
- (void)setOriginalObservable:(id)arg1;	// IMP=0x0000000000556bc3
- (void)setDetailsNoCopy:(CDStruct_e173081d)arg1 originalObservable:(id)arg2;	// IMP=0x0000000000556b21
- (id)initWithDetailsNoCopy:(CDStruct_e173081d)arg1 originalObservable:(id)arg2 isPriorNotification:(_Bool)arg3;	// IMP=0x0000000000556a84

@end

