"======================== Vundle ========================="
filetype off
set shellslash
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()

Plugin 'VundleVim/Vundle.vim'
Plugin 'octol/vim-cpp-enhanced-highlight'

" Theme
Plugin 'morhetz/gruvbox'
Plugin 'joshdick/onedark.vim'

" Auto Complete
Plugin 'vim-scripts/AutoComplPop'

Plugin 'itchyny/lightline.vim'

call vundle#end()
filetype plugin indent on

"====================== Snippets ========================="

nnoremap ,pr :1 <bar> -1read ~/.vim/templates/cpprag.cpp<CR>>A
"nnoremap ,cpp :-1read ~/.vim/templates/default.cpp<CR>60jf>A
nnoremap ,cpp :-1read ~/.vim/templates/default.cpp<CR>20jf>A
:autocmd BufNewFile *.cpp :-1read !python3 ~/scripts/initdate.py
:autocmd BufNewFile *.cpp
            \ :read ~/.vim/templates/nodef.cpp |
            \ :17 |

"==================== Color schemes ======================"

"set background=dark
colorscheme onedark
set termguicolors

"=================== Build Commands ======================"

map <F10> :call Compile()<CR>
imap <F10> <Esc>:call Compile()<CR>
vmap <F10> <Esc>:call Compile()<CR>

map <F9> :call Run()<CR>
imap <F9> <Esc>:call Run()<CR>
vmap <F9> <ESC>:call Run()<CR>

" Copy cua RR :D
func! Compile()
exec "w"
if &filetype == 'c'
    exec "!gcc % -o %:r"
elseif &filetype == 'cpp'
    exec "!build.sh %:r;"
elseif &filetype == 'java'
    exec "!javac %"
elseif &filetype == 'sh'
    exec "!bash %"
elseif &filetype == 'python'
    exec "!python3 %"
endif
endfunc

func! Run()
exec "w"
if &filetype == 'c'
    exec "!./%:r"
elseif &filetype == 'cpp'
    exec "!./%:r"
elseif &filetype == 'java'
    exec "!java %"
elseif &filetype == 'sh'
    exec "!bash %"
elseif &filetype == 'python'
    exec "!python3 %"
endif
endfunc

"====================== Keybinds ======================="

" Tabs
map tn :tabnew<cr>
map t :tabnext<cr>
map tm :tabmove<cr>
map tc :tabclose<cr>
map to :tabonly<cr>

" Copy all text
map cc :%y+<cr>
" Choose all text
map <C-a> <esc>ggVG<CR>

" Auto brackets
inoremap {<CR> {<CR>}<ESC>O
inoremap " ""<left>
inoremap ' ''<left>
inoremap ( ()<left>
inoremap [ []<left>
inoremap { {}<left>

" Auto complete keybinds from fryingduc
inoremap <expr> <Down> pumvisible() ? "<C-n>":"<Down>"
inoremap <expr> <Up> pumvisible() ? "<C-p>":"<Up>"
inoremap <expr> <Tab> pumvisible() ? "<C-y>":"<Tab>"

"======================= Lightline ======================"

"autocmd VimEnter * call lightline#update()

if !has('gui_running')
  set t_Co=256
endif
let g:lightline = {
      \ 'colorscheme': 'wombat',
      \ }

"=========================== Set ========================="


au FileType cpp set complete+=kspell
au FileType cpp set dictionary+=~/file/vim-auto-complete/words.txt
au FileType cpp set completeopt=menuone,longest
au FileType cpp set shortmess+=c

" general settings
set laststatus=2
set nocompatible nobackup nowb noswapfile

set ru cul
set nu rnu
set clipboard=unnamedplus
set backspace=indent,eol,start
set comments=sl:/*,mb:\ *,elx:\ */

set enc=utf-8 fenc=utf-8 termencoding=utf-8 encoding=UTF-8

set noshowmode
set incsearch hlsearch
set autoindent smartindent tabstop=4 shiftwidth=4 expandtab

set showcmd shellslash
syntax on  

set wildignore+=.git,.hg,.svn
set wildignore+=*.aux,*.out,*.toc
set wildignore+=*.o,*.obj,*.exe,*.dll,*.manifest,*.rbc,*.class
set wildignore+=*.ai,*.bmp,*.gif,*.ico,*.jpg,*.jpeg,*.png,*.psd,*.webp
set wildignore+=*.avi,*.divx,*.mp4,*.webm,*.mov,*.m2ts,*.mkv,*.vob,*.mpg,*.mpeg
set wildignore+=*.mp3,*.oga,*.ogg,*.wav,*.flac
set wildignore+=*.eot,*.otf,*.ttf,*.woff
set wildignore+=*.doc,*.pdf,*.cbr,*.cbz
set wildignore+=*.zip,*.tar.gz,*.tar.bz2,*.rar,*.tar.xz,*.kgb
set wildignore+=*.swp,.lock,.DS_Store,._*

"========================================================"
" lmao

highlight Comment cterm=italic gui=italic

set mouse=a
set ttymouse=sgr
