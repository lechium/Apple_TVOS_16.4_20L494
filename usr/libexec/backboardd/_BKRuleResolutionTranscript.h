//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString;

@interface _BKRuleResolutionTranscript : NSObject
{
    NSMutableString *_string;	// 8 = 0x8
    long long _indentLevel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000018ed1
- (id)build;	// IMP=0x0010000000018eb3
- (void)appendFailure:(id)arg1;	// IMP=0x0010000000018e08
- (void)appendResolution:(id)arg1;	// IMP=0x0010000000018d5d
- (void)appendRejection:(id)arg1;	// IMP=0x0010000000018cb2
- (void)appendMatch:(id)arg1;	// IMP=0x0010000000018c07
- (void)appendSection:(id)arg1;	// IMP=0x0010000000018b50
- (void)appendItem:(id)arg1;	// IMP=0x0010000000018aa5
- (void)appendEnvironment:(id)arg1;	// IMP=0x00100000000189fa
- (void)_appendIndentedItemWithPrefix:(id)arg1 label:(id)arg2 args:(struct __va_list_tag [1])arg3;	// IMP=0x0010000000018968
- (void)popSection;	// IMP=0x00100000000187f8
- (void)pushSection;	// IMP=0x00100000000187ee
- (void)restoreSection:(id)arg1;	// IMP=0x00100000000187ca
- (id)saveSection;	// IMP=0x00100000000187aa
- (void)_appendIndent;	// IMP=0x0010000000018754
- (id)init;	// IMP=0x00100000000186fe

@end
