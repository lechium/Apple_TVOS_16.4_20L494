//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _MKKVOProxyDelegate;

__attribute__((visibility("hidden")))
@interface _MKKVOProxy : NSObject
{
    id <_MKKVOProxyDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000204f37
@property(nonatomic) __weak id <_MKKVOProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000204e6b
- (void)removeObserverForObject:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0000000000204e50
- (void)removeObserverForObject:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;	// IMP=0x0000000000204e35
- (void)addObserverForObject:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x0000000000204e1a
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000204db6

@end

