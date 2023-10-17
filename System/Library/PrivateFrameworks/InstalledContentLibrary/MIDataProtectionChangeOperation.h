//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MIDataProtectionChangeOperation : NSObject
{
    int _newClass;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
    NSArray *_urls;	// 24 = 0x18
    unsigned long long _operationType;	// 32 = 0x20
}

+ (id)dataProtectionChangeOperationForURL:(id)arg1 settingClass:(int)arg2 changeType:(unsigned long long)arg3;	// IMP=0x006000000002c9f4
+ (id)dataProtectionChangeOperationForURLs:(id)arg1 settingClass:(int)arg2 changeType:(unsigned long long)arg3;	// IMP=0x006000000002c986
- (void).cxx_destruct;	// IMP=0x000000000002d773
@property(readonly, nonatomic) unsigned long long operationType; // @synthesize operationType=_operationType;
@property(readonly, nonatomic) int newClass; // @synthesize newClass=_newClass;
@property(readonly, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)performChangeOperation;	// IMP=0x000000000002d612
- (_Bool)_runChangeOperationWasLocked:(_Bool *)arg1 withError:(id *)arg2;	// IMP=0x000000000002cac3
- (id)initWithURLs:(id)arg1 newClass:(int)arg2 changeType:(unsigned long long)arg3;	// IMP=0x000000000002c905

@end

