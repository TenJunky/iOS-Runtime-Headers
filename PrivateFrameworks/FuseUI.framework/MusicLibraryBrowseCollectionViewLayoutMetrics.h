/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryBrowseCollectionViewLayoutMetrics : NSObject {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInsets;
    struct CGSize { 
        float width; 
        float height; 
    } _headerSize;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _headerViewContentInsets;
    float _itemHeight;
    float _itemWidth;
    float _minimumInteritemSpacing;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _sectionInsets;
    float _textLateralEdgePadding;
}

@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property (nonatomic) struct CGSize { float x1; float x2; } headerSize;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } headerViewContentInsets;
@property (nonatomic) float itemHeight;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } itemSize;
@property (nonatomic) float itemWidth;
@property (nonatomic) float minimumInteritemSpacing;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } sectionInsets;
@property (nonatomic) float textLateralEdgePadding;

- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (id)description;
- (struct CGSize { float x1; float x2; })headerSize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })headerViewContentInsets;
- (id)init;
- (float)itemHeight;
- (struct CGSize { float x1; float x2; })itemSize;
- (float)itemWidth;
- (float)minimumInteritemSpacing;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })sectionInsets;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setHeaderSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setHeaderViewContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setItemHeight:(float)arg1;
- (void)setItemWidth:(float)arg1;
- (void)setMinimumInteritemSpacing:(float)arg1;
- (void)setSectionInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTextLateralEdgePadding:(float)arg1;
- (float)textLateralEdgePadding;

@end