//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MDMBlockOperation;

__attribute__((visibility("hidden")))
@interface MDMBlockOperationContext : NSObject
{
    MDMBlockOperation *_operation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000003a54
@property(retain, nonatomic) MDMBlockOperation *operation; // @synthesize operation=_operation;
- (void)endBlockOperation;	// IMP=0x00000000000039fa

@end

