//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface MCMLazyDescription : NSString
{
    CDUnknownBlockType _block;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000780fd
- (id)redactedDescription;	// IMP=0x00000000000780b7
- (id)description;	// IMP=0x000000000007803c
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000077faf
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000077f36
- (unsigned long long)length;	// IMP=0x0000000000077ec4
- (id)initWithDescriber:(CDUnknownBlockType)arg1;	// IMP=0x0000000000077e2f

@end

