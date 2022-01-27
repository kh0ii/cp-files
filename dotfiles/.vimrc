"======================== Vundle ========================="
filetype off
set shellslash
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()

Plugin 'VundleVim/Vundle.vim'
Plugin 'octol/vim-cpp-enhanced-highlight'

" Nerdtree
Plugin 'preservim/nerdtree'

" Theme
Plugin 'morhetz/gruvbox'
Plugin 'joshdick/onedark.vim'

" Auto Complete
Plugin 'vim-scripts/AutoComplPop'

call vundle#end()
filetype plugin indent on

"====================== Snippets ========================="

nnoremap ,pr :1 <bar> -1read ~/.vim/templates/cpprag.cpp<CR>>A
nnoremap ,cpp :-1read ~/.vim/templates/default.cpp<CR>60jf>A
nnoremap ,cpp :-1read ~/.vim/templates/nodef.cpp<CR>6jf>A
:autocmd BufNewFile *.cpp :-1read !python3 ~/scripts/initdate.py
:autocmd BufNewFile *.cpp
            \ :read ~/.vim/templates/default.cpp |
            \ :65 |

"==================== Color schemes ======================"

"set background=dark
colorscheme onedark
set termguicolors

"==================== NERD Tree =========================="
autocmd StdinReadPre * let s:std_in=1
autocmd VimEnter * NERDTree | if argc() > 0 || exists("s:std_in") | wincmd p | endif

" Exit Vim if NERDTree is the only window remaining in the only tab.
autocmd BufEnter * if tabpagenr('$') == 1 && winnr('$') == 1 && exists('b:NERDTree') && b:NERDTree.isTabTree() | quit | endif
nmap <F6> :NERDTreeToggle<CR>

"=================== Build Commands ======================"

map <F10> :call Compile()<CR>
imap <F10> <Esc>:call Compile()<CR>
vmap <F10> <Esc>:call Compile()<CR>

map <F9> :call Run()<CR>
imap <F9> <Esc>:call Run()<CR>
vmap <F9> <ESC>:call Run()<CR>

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

" Auto complete keybinds
inoremap <expr> <Down> pumvisible() ? "<C-n>":"<Down>"
inoremap <expr> <Up> pumvisible() ? "<C-p>":"<Up>"
inoremap <expr> <Tab> pumvisible() ? "<C-y>":"<Tab>"

"=========================== Set ========================="

au FileType cpp set complete+=kspell
au FileType cpp set dictionary+=~/file/vim-auto-complete/words.txt
au FileType cpp set completeopt=menuone,longest
au FileType cpp set shortmess+=c

" general settings
set nocompatible
set nobackup
set nowb
set noswapfile

set nu
set clipboard=unnamedplus
:set backspace=indent,eol,start
set comments=sl:/*,mb:\ *,elx:\ */

set enc=utf-8 
set fenc=utf-8
set termencoding=utf-8
set encoding=UTF-8

set incsearch
set autoindent
set smartindent
set tabstop=4
set shiftwidth=4
set expandtab

set showcmd
set shellslash
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
" Made by kh0i

