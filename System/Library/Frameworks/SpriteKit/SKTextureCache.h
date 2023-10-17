//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKTextureCache : NSObject
{
    long long filteringMode;	// 8 = 0x8
    struct CGSize size;	// 16 = 0x10
    struct CGSize pixelSize;	// 32 = 0x20
    _Bool hasAlpha;	// 48 = 0x30
    _Bool isPOT;	// 49 = 0x31
    char *pixelData;	// 56 = 0x38
    int state;	// 64 = 0x40
    struct _opaque_pthread_mutex_t lock;	// 72 = 0x48
    shared_ptr_bb77cfd9 _backingTexture;	// 136 = 0x88
    unsigned int _textureFormat;	// 152 = 0x98
    int wrapMode;	// 156 = 0x9c
}

- (id).cxx_construct;	// IMP=0x000000000003c739
- (void).cxx_destruct;	// IMP=0x000000000003c728
@property(nonatomic) shared_ptr_bb77cfd9 backingTexture; // @synthesize backingTexture=_backingTexture;
@property(nonatomic) unsigned int textureFormat; // @synthesize textureFormat=_textureFormat;
@property(nonatomic) int wrapMode; // @synthesize wrapMode;
@property(nonatomic) long long filteringMode; // @synthesize filteringMode;
@property(nonatomic) int state; // @synthesize state;
@property(nonatomic) struct CGSize pixelSize; // @synthesize pixelSize;
@property(nonatomic) char *pixelData; // @synthesize pixelData;
@property(nonatomic) _Bool hasAlpha; // @synthesize hasAlpha;
@property(nonatomic) _Bool isPOT; // @synthesize isPOT;
@property(nonatomic) struct CGSize size; // @synthesize size;
@property(readonly, nonatomic, getter=getLock) struct _opaque_pthread_mutex_t *lock;
- (void)_reset;	// IMP=0x000000000003c54b
- (void)dealloc;	// IMP=0x000000000003c4c5
- (id)init;	// IMP=0x000000000003c420

@end

